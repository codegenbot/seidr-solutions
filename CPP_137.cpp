#include <boost/any.hpp>
#include <string>
#include <algorithm>
#include <cassert>

using boost::any;
using std::string;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return any();
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return any();
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float num1, num2;
        if(boost::any_cast<std::string>(a).find(",") != string::npos){
            std::replace(boost::any_cast<std::string&>(boost::any_cast<string&>(a)).begin(), boost::any_cast<std::string&>(boost::any_cast<string&>(a)).end(), ',', '.');
        }
        if(boost::any_cast<std::string>(b).find(",") != string::npos){
            std::replace(boost::any_cast<std::string&>(boost::any_cast<string&>(b)).begin(), boost::any_cast<std::string&>(boost::any_cast<string&>(b)).end(), ',', '.');
        }
        num1 = std::stof(boost::any_cast<std::string>(a));
        num2 = std::stof(boost::any_cast<std::string>(b));
        if(num1 > num2){
            return a;
        } else if(num1 < num2){
            return b;
        } else {
            return any();
        }
    } else {
        return any();
    }
}