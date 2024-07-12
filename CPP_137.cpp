#include <iostream>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
#include <string>
#include <cassert>

using namespace std;
using namespace boost;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b))
            return a;
        else if(any_cast<int>(a) < any_cast<int>(b))
            return b;
        else
            return std::string("None");
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b))
            return a;
        else if(any_cast<float>(a) < any_cast<float>(b))
            return b;
        else
            return std::string("None");
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float a_float = lexical_cast<float>(any_cast<std::string>(a));
        float b_float = lexical_cast<float>(any_cast<std::string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return std::string("None");
    }
    else if((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))){
        float a_float = lexical_cast<float>(a.type() == typeid(int) ? lexical_cast<std::string>(any_cast<int>(a)) : any_cast<std::string>(a));
        float b_float = lexical_cast<float>(b.type() == typeid(int) ? lexical_cast<std::string>(any_cast<int>(b)) : any_cast<std::string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return std::string("None");
    }
    return std::string("None");
}

int main() {
    assert(any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");
    return 0;
}