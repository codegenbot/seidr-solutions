#include <boost/any.hpp>
#include <cassert>
#include <string>

boost::any compare_one(boost::any a, boost::any b);

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float fa = stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        float fb = stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        if (fa > fb) {
            return a;
        } else if (fa < fb) {
            return b;
        }
    }
    return boost::any();
}