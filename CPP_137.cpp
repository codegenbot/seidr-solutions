#include <boost/any.hpp>
#include <cassert>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return nullptr;
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(stod(boost::any_cast<string>(a)) > stod(boost::any_cast<string>(b))){
            return a;
        } else if(stod(boost::any_cast<string>(a)) < stod(boost::any_cast<string>(b))){
            return b;
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}