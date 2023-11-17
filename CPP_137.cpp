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
    if(a.type()==b.type()){
        if(a==b)
            return "None";
        else
            return max(a,b);
    }
    else{
        if(a.type()==typeid(string))
            swap(a,b);
        if(b.type()==typeid(string)){
            string s=boost::any_cast<string>(b);
            replace(s.begin(),s.end(),',','.');
            b=stof(s);
        }
        if(a.type()==typeid(int))
            a=boost::any_cast<float>(a);
        return max(a,b);
    }
}
int main(){
    printf("%s\n",boost::any_cast<string>(compare_one(1,2.5)).c_str());
    printf("%s\n",boost::any_cast<string>(compare_one(1,"2,3")).c_str());
    printf("%s\n",boost::any_cast<string>(compare_one("5,1","6")).c_str());
    printf("%s\n",boost::any_cast<string>(compare_one("1",1)).c_str());
    return 0;
}
