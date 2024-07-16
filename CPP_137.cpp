#include <iostream>
#include <boost/any.hpp>
#include <cassert>
#include <algorithm>
#include <string>

int main() {
    // existing code here

    if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float num1, num2;
        if(((std::string)boost::any_cast<std::string>(a)).find(",") != std::string::npos){
            std::replace(((std::string&)boost::any_cast<std::string>(a)).begin(), ((std::string&)boost::any_cast<std::string>(a)).end(), ',', '.');
        }
        if(((std::string)boost::any_cast<std::string>(b)).find(",") != std::string::npos){
            std::replace(((std::string&)boost::any_cast<std::string>(b)).begin(), ((std::string&)boost::any_cast<std::string>(b)).end(), ',', '.');
        }
        num1 = std::stof(boost::any_cast<std::string>(a));
        num2 = std::stof(boost::any_cast<std::string>(b));
        if(num1 > num2){
            return a;
        } else if(num1 < num2){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}