Here is the completed code:

```cpp
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) && is_none(b))
        return any("None");
    else if (is_none(a))
        return b;
    else if (is_none(b))
        return a;

    int ai = a.type() == typeid(int);
    int bi = b.type() == typeid(int);

    float af = a.type() == typeid(float);
    float bf = b.type() == typeid(float);

    bool astr = a.type() == typeid(string);
    bool bstr = b.type() == typeid(string);

    if (ai && bi) {
        return greater<int>()(boost::any_cast<int>(a), boost::any_cast<int>(b)) ? b : a;
    } else if (af && bf) {
        return greater<float>()(boost::any_cast<float>(a), boost::any_cast<float>(b)) ? b : a;
    } else if (astr && bstr) {
        string astr_val = boost::any_cast<string>(a);
        string bstr_val = boost::any_cast<string>(b);

        size_t pos = 0, start = 0;
        while ((pos = astr_val.find(",", start)) != std::string::npos) {
            double val1 = std::stod(astr_val.substr(start, pos - start));
            double val2 = std::stod(bstr_val.substr(start, pos - start));

            if (val1 > val2)
                return a;
            else if (val2 > val1)
                return b;

            start = pos + 1;
        }

        double val1 = std::stod(astr_val.substr(start));
        double val2 = std::stod(bstr_val.substr(start));

        if (val1 > val2)
            return a;
        else if (val2 > val1)
            return b;

        return any("None");
    } else {
        throw invalid_argument("Invalid argument type.");
    }
}