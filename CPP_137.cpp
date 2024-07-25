#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::make_shared<int>(0)));
    } else if (is_any_of<a>(double.class)) {
        double x = any_cast<double>(a);
        double y = any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::make_shared<int>(0)));
    } else if (is_any_of<a>(std::string.class)) {
        std::string x = any_cast<std::string>(a);
        std::string y = any_cast<std::string>(b);
        double ax = std::stod(x);
        double ay = std::stod(y);
        return (ax > ay) ? a : ((ax < ay) ? b : boost::any(std::make_shared<int>(0)));
    }
    return a;
}