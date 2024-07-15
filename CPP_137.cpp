#include <any>
#include <string>

std::string compareValues(const std::any &a, const std::any &b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b)){
            return std::to_string(std::any_cast<int>(a));
        } else if(std::any_cast<int>(a) < std::any_cast<int>(b)){
            return std::to_string(std::any_cast<int>(b));
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b)){
            return std::to_string(std::any_cast<float>(a));
        } else if(std::any_cast<float>(a) < std::any_cast<float>(b)){
            return std::to_string(std::any_cast<float>(b));
        } else {
            return "None";
        }
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        if(std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))){
            return std::any_cast<std::string>(a);
        } else if(std::stof(std::any_cast<std::string>(a)) < std::stof(std::any_cast<std::string>(b))){
            return std::any_cast<std::string>(b);
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}