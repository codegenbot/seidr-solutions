#include <boost/any.hpp>
#include <algorithm>
#include <string>
#include <cassert>

std::string compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return boost::any_cast<int>(a);
        }else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return boost::any_cast<int>(b);
        }
    }else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return boost::any_cast<float>(a);
        }else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return boost::any_cast<float>(b);
        }
    }else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        std::replace(strA.begin(), strA.end(), ',', '.');
        std::replace(strB.begin(), strB.end(), ',', '.');
        float floatA = std::stof(strA);
        float floatB = std::stof(strB);
        if(floatA > floatB){
            return boost::any_cast<std::string>(a);
        }else if(floatA < floatB){
            return boost::any_cast<std::string>(b);
        }
    }
    return std::string("None");
}