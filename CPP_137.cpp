#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        if(std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b)))
            return a;
        else if(std::stof(boost::any_cast<std::string>(a)) < std::stof(boost::any_cast<std::string>(b)))
            return b;
    }
    return boost::any();
}