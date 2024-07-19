#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return boost::any("None");
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return boost::any("None");
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float valA = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
        float valB = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
        if(valA > valB){
            return a;
        } else if(valA < valB){
            return b;
        } else {
            return boost::any("None");
        }
    } else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
        float valA = a.type() == typeid(int) ? boost::any_cast<int>(a) : stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
        float valB = b.type() == typeid(int) ? boost::any_cast<int>(b) : stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
        if(valA > valB){
            return a;
        } else if(valA < valB){
            return b;
        } else {
            return boost::any("None");
        }
    }
    return boost::any("None");
}

int main() {
    // Test the function
    assert(boost::any_cast<string>(compare_one(5, 7)) == "None");
    assert(boost::any_cast<int>(compare_one(10, 3)) == 10);
    assert(boost::any_cast<float>(compare_one(3.5f, 3.6f)) == 3.6f);
    assert(boost::any_cast<string>(compare_one("2.3", "4.5")) == "4.5");
    assert(boost::any_cast<float>(compare_one(8, "6.7")) == 8);

    return 0;
}