#include <cassert>
#include <boost/any.hpp>
#include <algorithm>
#include <string>

using namespace std;

string compare_one(boost::any a, boost::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return boost::any_cast<int>(a);
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return boost::any_cast<int>(b);
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return boost::any_cast<float>(a);
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return boost::any_cast<float>(b);
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        float num1, num2;
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        
        if(str_a.find_first_of(",") != string::npos){
            std::replace(str_a.begin(), str_a.end(), ',', '.');
        }
        if(str_b.find_first_of(",") != string::npos){
            std::replace(str_b.begin(), str_b.end(), ',', '.');
        }
        num1 = stof(str_a);
        num2 = stof(str_b);
        
        if(num1 > num2){
            return boost::any_cast<string>(a);
        } else if(num1 < num2){
            return boost::any_cast<string>(b);
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}