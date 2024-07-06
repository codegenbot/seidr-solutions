```
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using boost::any_cast;
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod(any_cast<string>(a));
        return da > any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double db = stod(any_cast<string>(b));
        return da > db ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        return lexicographical_compare(sa.begin(), sa.end(),
            sb.begin(), sb.end()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double da = any_cast<int>(a);
        string sb = any_cast<string>(b);
        return da > stod(sb) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double db = any_cast<int>(b);
        string sa = any_cast<string>(a);
        return stod(sa) > db ? a : b;
    }
    return boost::any("None");
}