#include <any>
#include <boost/any.hpp>
#include <string>

using namespace std;
using namespace boost;

std::any compare(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return a.type() == typeid(x) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return x > y ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return x > y ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double))) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return stod(x) > y ? a : b;
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        return x > stod(y) ? a : b;
    } else {
        return a;
    }
}