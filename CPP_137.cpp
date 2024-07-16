#include <iostream>
#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
        if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
        if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        if(a.type().name() == typeid(std::string).name()){
            if(std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b))) return a;
            if(std::stof(boost::any_cast<std::string>(a)) < std::stof(boost::any_cast<std::string>(b))) return b;
        }
    }
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");
    return 0;
}