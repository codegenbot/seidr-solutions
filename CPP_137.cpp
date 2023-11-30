#include<iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if(num1 > num2){
            return num1;
        }
        else if(num1 < num2){
            return num2;
        }
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if(num1 > num2){
            return num1;
        }
        else if(num1 < num2){
            return num2;
        }
    }
    else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if(str1 > str2){
            return str1;
        }
        else if(str1 < str2){
            return str2;
        }
    }
    return "None";
}

int main(){
    boost::any result1 = compare_one(1, 2.5);
    boost::any result2 = compare_one(1, "2,3");
    boost::any result3 = compare_one("5,1", "6");
    boost::any result4 = compare_one("1", 1);

    cout << boost::any_cast<float>(result1) << endl;
    cout << boost::any_cast<string>(result2) << endl;
    cout << boost::any_cast<string>(result3) << endl;
    cout << boost::any_cast<string>(result4) << endl;

    return 0;
}