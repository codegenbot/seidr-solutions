#include <iostream>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)){
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)){
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)){
        return stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b)) ? a : boost::any("None");
    }
    return boost::any("None");
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
    
    return 0;
}