#include <iostream>
#include <any>
#include <string>
#include <cassert>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b))
            return a;
        else if(std::any_cast<int>(a) < std::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b))
            return a;
        else if(std::any_cast<float>(a) < std::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float a_float = stof(std::any_cast<string>(a));
        float b_float = stof(std::any_cast<string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return "None";
    }
    else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
        float a_float = stof(a.type() == typeid(int) ? to_string(std::any_cast<int>(a)) : std::any_cast<string>(a));
        float b_float = stof(b.type() == typeid(int) ? to_string(std::any_cast<int>(b)) : std::any_cast<string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return "None";
    }
    return "None";
}

assert(std::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
return 0;