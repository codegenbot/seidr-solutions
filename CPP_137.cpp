#include <any>
#include <string>
#include <algorithm>
#include <cassert>

using std::any;
using std::string;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b)){
            return a;
        } else if(any_cast<int>(a) < any_cast<int>(b)){
            return b;
        } else {
            return any();
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b)){
            return a;
        } else if(any_cast<float>(a) < any_cast<float>(b)){
            return b;
        } else {
            return any();
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float num1, num2;
        if(any_cast<std::string>(a).find(",") != std::string::npos){
            std::replace(any_cast<std::string&>(a).begin(), any_cast<std::string&>(a).end(), ',', '.');
        }
        if(any_cast<std::string>(b).find(",") != std::string::npos){
            std::replace(any_cast<std::string&>(b).begin(), any_cast<std::string&>(b).end(), ',', '.');
        }
        num1 = std::stof(any_cast<std::string>(a));
        num2 = std::stof(any_cast<std::string>(b));
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