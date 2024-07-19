#include <boost/any.hpp>
#include <cassert>
using namespace std;

std::string compare_one(const boost::any &a, const boost::any &b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return boost::any_cast<int>(a);
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return boost::any_cast<int>(b);
        } else {
            return "";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return boost::any_cast<float>(a);
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return boost::any_cast<float>(b);
        } else {
            return "";
        }
    } else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        double valA = std::stod(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        double valB = std::stod(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        if(valA > valB){
            return boost::any_cast<std::string>(a);
        } else if(valA < valB){
            return boost::any_cast<std::string>(b);
        } else {
            return "";
        }
    } else if((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))){
        double valA = a.type() == typeid(int) ? boost::any_cast<int>(a) : std::stod(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        double valB = b.type() == typeid(int) ? boost::any_cast<int>(b) : std::stod(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        if(valA > valB){
            return boost::any_cast<std::string>(a);
        } else if(valA < valB){
            return boost::any_cast<std::string>(b);
        } else {
            return "";
        }
    }
    assert(false); // Unknown types encountered
    return ""; // Default return value
}