#include<iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        if(int_a > int_b){
            return int_a;
        }else if(int_b > int_a){
            return int_b;
        }else{
            return "None";
        }
    }else if(a.type() == typeid(float) && b.type() == typeid(float)){
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        if(float_a > float_b){
            return float_a;
        }else if(float_b > float_a){
            return float_b;
        }else{
            return "None";
        }
    }else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string string_a = boost::any_cast<string>(a);
        string string_b = boost::any_cast<string>(b);
        if(string_a > string_b){
            return string_a;
        }else if(string_b > string_a){
            return string_b;
        }else{
            return "None";
        }
    }else if(a.type() == typeid(int) && b.type() == typeid(string)){
        int int_a = boost::any_cast<int>(a);
        string string_b = boost::any_cast<string>(b);
        return string_b;
    }else if(a.type() == typeid(string) && b.type() == typeid(int)){
        string string_a = boost::any_cast<string>(a);
        int int_b = boost::any_cast<int>(b);
        return string_a;
    }else if(a.type() == typeid(float) && b.type() == typeid(string)){
        float float_a = boost::any_cast<float>(a);
        string string_b = boost::any_cast<string>(b);
        return string_b;
    }else if(a.type() == typeid(string) && b.type() == typeid(float)){
        string string_a = boost::any_cast<string>(a);
        float float_b = boost::any_cast<float>(b);
        return string_a;
    }else{
        return "None";
    }
}

int main(){
    boost::any result = compare_one(1, 2.5);
    cout << boost::any_cast<float>(result) << endl;

    result = compare_one(1, "2,3");
    cout << boost::any_cast<string>(result) << endl;

    result = compare_one("5,1", "6");
    cout << boost::any_cast<string>(result) << endl;

    result = compare_one("1", 1);
    cout << boost::any_cast<string>(result) << endl;

    return 0;
}