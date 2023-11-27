#include<iostream>
#include<string>
#include<typeinfo>
#include<any>

using namespace std;

any compare_one(any a, any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)){
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        if (num1 > num2){
            return num1;
        }
        else if (num1 < num2){
            return num2;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)){
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        if (num1 > num2){
            return num1;
        }
        else if (num1 < num2){
            return num2;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)){
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 > str2){
            return str1;
        }
        else if (str1 < str2){
            return str2;
        }
    }
    return any();
}