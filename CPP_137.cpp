#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a < (float) b ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float) a < boost::any_cast<string>(b).find(",") > 0 ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) + ",1" < boost::any_cast<string>(b) + ",1"
            ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return static_cast<int>(a) > static_cast<int>(b) ? a : ((static_cast<int>(a) == static_cast<int>(b)) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float) a > (float) b ? a : ((float) a == (float) b ? boost::any("None") : a);
    }
    else {
        return "None";
    }
}