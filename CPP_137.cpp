#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = boost::any_cast<int>(a);
        int val_b = boost::any_cast<int>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val_a = boost::any_cast<float>(a);
        float val_b = boost::any_cast<float>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string val_a = boost::any_cast<std::string>(a);
        std::string val_b = boost::any_cast<std::string>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int val_a = boost::any_cast<int>(a);
        std::string val_b = boost::any_cast<std::string>(b);
        return boost::any(val_b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string val_a = boost::any_cast<std::string>(a);
        int val_b = boost::any_cast<int>(b);
        return boost::any(val_a);
    }
    return boost::any();
}