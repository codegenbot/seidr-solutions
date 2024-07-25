#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(double.class)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string.class)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        double ax = stod(x);
        double ay = stod(y);
        return (ax > ay) ? a : ((ax < ay) ? b : boost::any(std::string("None")));
    }
    return a;
}