```cpp
#include <boost/any.hpp>
using namespace std;

boost::any result(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? a : (x < y ? b : b));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? a : (x < y ? b : b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stod(x) > stod(y) ? a : (stod(x) < stod(y) ? b : b));
    } else {
        throw invalid_argument("Invalid input");
    }
}