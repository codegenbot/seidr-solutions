#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = boost::convert<string, double>::from(any_cast<string>(a)).get();
        return da > any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double db = boost::convert<string, double>::from(any_cast<string>(b)).get();
        return da > db ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        return lexicographical_compare(sa.begin(), sa.end(),
            sb.begin(), sb.end()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double da = boost::convert<int, double>::from(any_cast<int>(a)).get();
        string sb = any_cast<string>(b);
        return da > stod(sb) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double db = boost::convert<int, double>::from(any_cast<int>(b)).get();
        string sa = any_cast<string>(a);
        return stod(sa) > db ? a : b;
    }
    return "None";
}