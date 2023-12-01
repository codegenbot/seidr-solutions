#include <boost/algorithm/string/replace.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        boost::algorithm::replace_all(x, ",", ".");
        boost::algorithm::replace_all(y, ",", ".");
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    }
    return "None";
}