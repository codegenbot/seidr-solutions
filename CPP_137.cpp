#include <boost/any.hpp>
#include <string>

using namespace boost;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(any_cast<int>(a) > any_cast<int>(b)){
            return a;
        } else if(any_cast<int>(a) < any_cast<int>(b)){
            return b;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(any_cast<float>(a) > any_cast<float>(b)){
            return a;
        } else if(any_cast<float>(a) < any_cast<float>(b)){
            return b;
        }
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float fa = std::stof(any_cast<std::string>(a).replace(any_cast<std::string>(a).find(','), 1, "."));
        float fb = std::stof(any_cast<std::string>(b).replace(any_cast<std::string>(b).find(','), 1, "."));
        if(fa > fb){
            return a;
        } else if(fa < fb){
            return b;
        }
    }
    return any();
}