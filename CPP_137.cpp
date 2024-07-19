#include <boost/any.hpp>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

boost::any compare(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if(str_a.find_first_of(".,") != string::npos || str_b.find_first_of(".,") != string::npos){
            replace(str_a.begin(), str_a.end(), ',', '.');
            replace(str_b.begin(), str_b.end(), ',', '.');
        }
        if(stod(str_a) > stod(str_b)){
            return a;
        } else if(stod(str_a) < stod(str_b)){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}