```
#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::make_shared<int>(0)));
    } else if (is_any_of<a>(double.class)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::make_shared<int>(0)));
    } else if (is_any_of<a>(std::shared_ptr<int>::type())) {
        int x = *boost::any_cast<std::shared_ptr<int>>(a);
        int y = *boost::any_cast<std::shared_ptr<int>>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::make_shared<int>(0)));
    }
    return a;
}