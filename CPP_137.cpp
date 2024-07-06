#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert<int>(), b.convert<int>());
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b))
                   ? a
                   : b;
    } else if ((a.type() == typeid(string) && b.type() != typeid(int)) ||
               (b.type() == typeid(string) && a.type() != typeid(int))) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (stod(sb) > stod(sa)) ? b : ((stod(sa) >= stod(sb)) ? "None" : b);
    }
    return "None";
}