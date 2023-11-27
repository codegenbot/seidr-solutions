#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<int>(&a) && boost::any_cast<int>(&b)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (boost::any_cast<float>(&a) && boost::any_cast<float>(&b)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (boost::any_cast<std::string>(&a) && boost::any_cast<std::string>(&b)) {
        if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b)) {
            return a;
        } else if (boost::any_cast<std::string>(a) < boost::any_cast<std::string>(b)) {
            return b;
        }
    }
    return boost::any();
}