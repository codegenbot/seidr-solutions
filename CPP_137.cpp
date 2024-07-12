#include <iostream>
#include <any>
#include <string>
#include <cassert>

using namespace std;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b))
            return a;
        else if(any_cast<int>(a) < any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b))
            return a;
        else if(any_cast<float>(a) < any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float a_float = stof(any_cast<string>(a));
        float b_float = stof(any_cast<string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return "None";
    }
    else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
        float a_float = stof(a.type() == typeid(int) ? any_cast<int>(a) : any_cast<string>(a));
        float b_float = stof(b.type() == typeid(int) ? any_cast<int>(b) : any_cast<string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return "None";
    }
    return "None";
}

int main() {
    assert(any_cast<string>(compare_one(string("1"), 1)) == "None");
    return 0;
}