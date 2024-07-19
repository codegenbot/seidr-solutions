#include <boost/any.hpp>
#include <cassert>
#include <algorithm>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b)){
            return a;
        } else if(std::any_cast<int>(a) < std::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b)){
            return a;
        } else if(std::any_cast<float>(a) < std::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float num1, num2;
        if(std::any_cast<std::string>(a).find_first_of(",") != std::string::npos){
            std::replace(std::any_cast<std::string>(a).begin(), std::any_cast<std::string>(a).end(), ',', '.');
        }
        if(std::any_cast<std::string>(b).find_first_of(",") != std::string::npos){
            std::replace(std::any_cast<std::string>(b).begin(), std::any_cast<std::string>(b).end(), ',', '.');
        }
        num1 = std::stof(std::any_cast<std::string>(a));
        num2 = std::stof(std::any_cast<std::string>(b));

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