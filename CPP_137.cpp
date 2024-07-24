#include <boost/config.hpp>
#ifdef _MSC_VER
#include <boost/config-noxtra.hpp>
#endif

#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return max((float)a.convert_to<float>(), stof(str.erase(0, 1).erase(str.length() - 1)));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a == b ? boost::any("None") : (boost::any)max((int)a.convert_to<int>(), (int)b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a > b ? a : b;
    }
    return "None";
}