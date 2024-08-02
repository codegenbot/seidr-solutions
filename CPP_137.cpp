#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string result = max(a.convert_to<string>(), b.convert_to<string>());
        if(result.empty()) return "None";
        return boost::any(result);
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        int result = (max(a.convert_to<int>(), stod(b.convert_to<string>())));
        return result;
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        float result = max(stof(a.convert_to<string>()), b.convert_to<float>());
        return boost::any(result);
    }
    return "None";
}