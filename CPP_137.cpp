#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = any_cast<string>(a).convert_to<double>();
        return da > any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double db = any_cast<string>(b).convert_to<double>();
        return any_cast<double>(a) > db ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        return lexicographical_compare(sa.begin(), sa.end(),
            sb.begin(), sb.end()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double da = any_cast<int>(a).convert_to<double>();
        string sb = any_cast<string>(b);
        return da > stod(sb) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double db = any_cast<int>(b).convert_to<double>();
        string sa = any_cast<string>(a);
        return stod(sa) > db ? a : b;
    }
    return "None";
}