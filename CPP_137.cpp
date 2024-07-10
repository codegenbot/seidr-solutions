#include <iostream>
#include <any>
#include <string>
#include <algorithm>
#include <cassert>

std::any compare_one(const std::any& a, const std::any& b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        std::string strA = std::any_cast<std::string>(a);
        std::string strB = std::any_cast<std::string>(b);

        if(strA.find(",") != std::string::npos){
            std::replace(strA.begin(), strA.end(), ',', '.');
        }

        if(strB.find(",") != std::string::npos){
            std::replace(strB.begin(), strB.end(), ',', '.');
        }

        float numA = std::stof(strA);
        float numB = std::stof(strB);
        
        return numA > numB ? a : (numA < numB ? b : "None");
    } else {
        return "None";
    }
}

int main(){
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");

    // Add more test cases here if needed

    std::cout << "All test cases pass";
    return 0;
}