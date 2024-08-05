#include <iostream>
#include <any>
#include <string>

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
    string a_str = std::any_cast<string>(a);
    string b_str = std::any_cast<string>(b);
    
    replace(a_str.begin(), a_str.end(), ',', '.');
    replace(b_str.begin(), b_str.end(), ',', '.');

    float a_float = stof(a_str);
    float b_float = stof(b_str);

    if(a_float > b_float){
        return a;
    } else if (a_float < b_float){
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}