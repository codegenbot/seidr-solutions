```cpp
#include <boost/any.hpp>
using namespace boost;

any compare(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : any(typeid(int)));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return x > y ? a : (x < y ? b : any(typeid(double)));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        wstring x = boost::any_cast<wstring>(a);
        wstring y = boost::any_cast<wstring>(b);
        return lexicographical_compare(x.begin(), x.end(), y.begin(), y.end()) ? a : (lexicographical_compare(y.begin(), y.end(), x.begin(), x.end()) ? b : any(typeid(string)));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double))) {
        wstring x = boost::any_cast<wstring>(a);
        double y = boost::any_cast<double>(b);
        return stod(x) > y ? a : (stod(x) < y ? b : any(typeid(string)));
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        double x = boost::any_cast<double>(a);
        wstring y = boost::any_cast<wstring>(b);
        return x > stod(y) ? a : (x < stod(y) ? b : any(typeid(double)));
    } else {
        return any(typeid(void)); // Return void type for incompatible types
    }
}