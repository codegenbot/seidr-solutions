#include <string>
#include <boost/any.hpp>
#include <cassert>

boost::any compare_one(const boost::any& a, const boost::any& b);

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
        else
            return boost::any();
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
        else
            return boost::any();
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float num1 = std::stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        float num2 = std::stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
        else
            return boost::any();
    }
    return boost::any();
}