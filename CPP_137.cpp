#include <boost/any.hpp>
#include <string>
#include <boost/algorithm/string/replace.hpp>
#include <cstdlib>

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
        double num1 = std::stod(boost::replace_all_copy(boost::any_cast<std::string>(a), ",", "."));
        double num2 = std::stod(boost::replace_all_copy(boost::any_cast<std::string>(b), ",", "."));
        if(num1 > num2)
            return a;
        else if(num1 < num2)
            return b;
        else
            return boost::any();
    }
    return boost::any();
}