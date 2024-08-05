#include <iostream>
#include <string>
#include <any>

using namespace std;

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
    string a_str = std::any_cast<std::string>(a);
    string b_str = std::any_cast<std::string>(b);
    for (char& c : a_str) {
        if (c == ',') c = '.';
    }
    for (char& c : b_str) {
        if (c == ',') c = '.';
    }
    
    float a_float = stof(a_str);
    float b_float = stof(b_str);
    
    if(a_float > b_float){
        return a;
    } else if(a_float < b_float){
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}