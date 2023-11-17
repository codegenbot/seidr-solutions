/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
    if(a.type()==typeid(string)){
        string s1=boost::any_cast<string>(a);
        string s2=boost::any_cast<string>(b);
        replace(s1.begin(),s1.end(),',','.');
        replace(s2.begin(),s2.end(),',','.');
        float f1=stof(s1);
        float f2=stof(s2);
        if(f1>f2)
            return a;
        else if(f1<f2)
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(int)){
        int i1=boost::any_cast<int>(a);
        int i2=boost::any_cast<int>(b);
        if(i1>i2)
            return a;
        else if(i1<i2)
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(float)){
        float f1=boost::any_cast<float>(a);
        float f2=boost::any_cast<float>(b);
        if(f1>f2)
            return a;
        else if(f1<f2)
            return b;
        else
            return "None";
    }
}
int main(){
    printf("%s\n",boost::any_cast<string>(compare_one(1,2.5)).c_str());
    printf("%s\n",boost::any_cast<string>(compare_one(1,"2,3")).c_str());
    printf("%s\n",boost::any_cast<string>(compare_one("5,1","6")).c_str());
    printf("%s\n",boost::any_cast<string>(compare_one("1",1)).c_str());
}
