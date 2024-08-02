#include <boost/any.hpp>
#include <boost/conversion.hpp> // for boost::any->int, float conversion
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strMax = (a.convert_to<string>() > b.convert_to<string>()) ? a.convert_to<string>() : b.convert_to<string>();
        return boost::any(strMax);
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        float val = stof(b.convert_to<string>());
        return max(a.convert_to<float>(), val) ? boost::any(a) : boost::any(val);
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        float val = a.convert_to<string>() == "" ? 0.0f : stof(a.convert_to<string>());
        return max(val, b.convert_to<float>()) ? boost::any(a) : boost::any(b);
    }
    return "None";
}