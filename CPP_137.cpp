#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        int num_a = boost::any_cast<int>(a);
        int num_b = boost::any_cast<int>(b);
        if(num_a > num_b){
            return a;
        }else if(num_a < num_b){
            return b;
        }
    }else if(a.type() == typeid(float) && b.type() == typeid(float)){
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        if(float_a > float_b){
            return a;
        }else if(float_a < float_b){
            return b;
        }
    }else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if(str_a > str_b){
            return a;
        }else if(str_a < str_b){
            return b;
        }
    }

    return "None";
}