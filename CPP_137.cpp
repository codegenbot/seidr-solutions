#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        if(std::stod(boost::any_cast<std::string>(a)) > std::stod(boost::any_cast<std::string>(b)))
            return a;
        else if(std::stod(boost::any_cast<std::string>(a)) < std::stod(boost::any_cast<std::string>(b)))
            return b;
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "None");

    return 0;
}