#include <boost/any.hpp>
#include <string>

std::string compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return boost::any_cast<int>(a);
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return boost::any_cast<int>(b);
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return boost::any_cast<float>(a);
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return boost::any_cast<float>(b);
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        if(std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b)))
            return boost::any_cast<std::string>(a);
        else if(std::stof(boost::any_cast<std::string>(a)) < std::stof(boost::any_cast<std::string>(b)))
            return boost::any_cast<std::string>(b);
    }
    return std::string("None");
}