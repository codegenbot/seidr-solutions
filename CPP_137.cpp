```cpp
#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    int a_int = boost::any_cast<int>(a);
    float a_float = boost::any_cast<float>(a);
    std::string a_str = boost::any_cast<std::string>(a);

    int b_int = boost::any_cast<int>(b);
    float b_float = boost::any_cast<float>(b);
    std::string b_str = boost::any_cast<std::string>(b);

    if (a.is_none() || b.is_none()) {
        return "None";
    }

    if (a_str.length() > 0) {
        if (b_str.length() > 0) {
            if (a_str.compare(b_str) > 0)
                return a;
            else if (a_str.compare(b_str) < 0)
                return b;
            else
                return boost::any("None");
        } else {
            return a_str;
        }
    }

    if (!std::isfinite(a_float)) {
        if (std::isnan(a_float)) {
            if (std::isinf(b_float))
                return b;
            else
                return "None";
        } else {
            if (b_float == 0)
                return a;
            else if (a_float > b_float)
                return a;
            else if (a_float < b_float)
                return b;
            else
                return boost::any("None");
        }
    }

    if (!std::isfinite(b_float)) {
        if (std::isnan(b_float)) {
            if (std::isinf(a_float))
                return a;
            else
                return "None";
        } else {
            if (a_float == 0)
                return b;
            else if (a_float > b_float)
                return a;
            else if (a_float < b_float)
                return b;
            else
                return boost::any("None");
        }
    }

    if (a_int > b_int) {
        return a;
    } else if (a_int < b_int) {
        return b;
    } else {
        return boost::any("None");
    }
}