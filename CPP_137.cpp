#include <any>
#include <cassert>
#include <string>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b)){
            return a;
        } else if(std::any_cast<int>(a) < std::any_cast<int>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b)){
            return a;
        } else if(std::any_cast<float>(a) < std::any_cast<float>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(stof(std::any_cast<string>(a)) > stof(std::any_cast<string>(b))){
            return a;
        } else if(stof(std::any_cast<string>(a)) < stof(std::any_cast<string>(b))){
            return b;
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}