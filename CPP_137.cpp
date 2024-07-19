#include <any>
#include <cassert>
using namespace std;

std::string compare_one(const std::any &a, const std::any &b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b)){
            return std::to_string(std::any_cast<int>(a));
        } else if(std::any_cast<int>(a) < std::any_cast<int>(b)){
            return std::to_string(std::any_cast<int>(b));
        } else {
            return "";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b)){
            return std::to_string(std::any_cast<float>(a));
        } else if(std::any_cast<float>(a) < std::any_cast<float>(b)){
            return std::to_string(std::any_cast<float>(b));
        } else {
            return "";
        }
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        double valA = std::stod(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        double valB = std::stod(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        if(valA > valB){
            return std::any_cast<std::string>(a);
        } else if(valA < valB){
            return std::any_cast<std::string>(b);
        } else {
            return "";
        }
    } else if((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))){
        double valA = a.type() == typeid(int) ? std::any_cast<int>(a) : std::stod(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        double valB = b.type() == typeid(int) ? std::any_cast<int>(b) : std::stod(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        if(valA > valB){
            return std::any_cast<std::string>(a);
        } else if(valA < valB){
            return std::any_cast<std::string>(b);
        } else {
            return "";
        }
    }
    assert(false); // Unknown types encountered
    return ""; // Default return value
}