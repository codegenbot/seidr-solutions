#include <any>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

namespace std {

std::any a;
std::any b;

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(double))) {
    string x = boost::any_cast<string>(a);
    double y = boost::any_cast<double>(b);
    if (stod(x) > y) return a;
    else if (stod(x) < y) return b;
    else return a;
} else if ((a.type() == typeid(double)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    double x = boost::any_cast<double>(a);
    string y = boost::any_cast<string>(b);
    if (x > stod(y)) return a;
    else if (x < stod(y)) return b;
    else return a;
} else {
    return a;
}