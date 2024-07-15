#include <boost/any.hpp>
#include <string>

boost::any compare_one(const boost::any& a, const boost::any& b);

if(a.type() == typeid(int) && b.type() == typeid(int)) {
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    } else {
        return "None";
    }
} else if(a.type() == typeid(float) && b.type() == typeid(float)) {
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
        return b;
    } else {
        return "None";
    }
} else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    float numA = stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
    float numB = stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
    if(numA > numB) {
        return a;
    } else if(numA < numB) {
        return b;
    } else {
        return "None";
    }
} else if((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
    float numA = a.type() == typeid(int) ? boost::any_cast<int>(a) : stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
    float numB = b.type() == typeid(int) ? boost::any_cast<int>(b) : stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
    if(numA > numB) {
        return a;
    } else if(numA < numB) {
        return b;
    } else {
        return "None";
    }
}