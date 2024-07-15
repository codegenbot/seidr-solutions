#include <boost/any.hpp>
#include <string>

boost::any compare_one(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if ((a.type() == typeid(string) && b.type() == typeid(int)) || (a.type() == typeid(int) && b.type() == typeid(string))) {
        return "None";
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(stoi(boost::any_cast<string>(a)) > stoi(boost::any_cast<string>(b))){
            return a;
        } else if(stoi(boost::any_cast<string>(a)) < stoi(boost::any_cast<string>(b))){
            return b;
        } else {
            return "None";
        }
    }
}