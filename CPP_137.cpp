#include <boost/any.hpp>
using namespace boost;
using namespace std;

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
        if (lexicographical_compare(x.begin(), x.end(), y.begin(), y.end())) return a;
        else if (!lexicographical_compare(x.begin(), x.end(), y.begin(), y.end())) return b;
        else return any(typeid(string));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double))) {
        wstring x = boost::any_cast<wstring>(a);
        double y = boost::any_cast<double>(b);
        if (stod(boost::any_cast<string>(a).str()) > y) return a;
        else if (stod(boost::any_cast<string>(a).str()) < y) return b;
        else return any(typeid(string));
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        double x = boost::any_cast<double>(a);
        wstring y = boost::any_cast<wstring>(b);
        if (x > stod(y.str())) return a;
        else if (x < stod(y.str())) return b;
        else return any(typeid(double));
    } else {
        return any(typeid(void)); // Return void type for incompatible types
    }
}