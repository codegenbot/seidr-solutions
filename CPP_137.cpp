#include <boost/any.hpp>
#include <cassert>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    assert(a.type() == b.type());

    if(a.type() == typeid(int)) {
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
        else
            return 0;
    }
    else if(a.type() == typeid(float)) {
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
        else
            return 0.0f;
    }
    else if(a.type() == typeid(std::string)) {
        if(boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
            return a;
        else if(boost::any_cast<std::string>(a) < boost::any_cast<std::string>(b))
            return b;
        else
            return "";
    }

    return boost::any(); // None
}