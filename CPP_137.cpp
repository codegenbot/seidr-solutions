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
#include<any>    //to use any type of data type
#include<lexical_cast>  // to convert string to int
using namespace std;
any compare_one(any a,any b){
    if(a.type()==typeid(int)&&b.type()==typeid(int)){
        if(any_cast<int>(a)>any_cast<int>(b))
            return a;
        else if(any_cast<int>(a)<any_cast<int>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(float)){
        if(any_cast<int>(a)>any_cast<float>(b))
            return a;
        else if(any_cast<int>(a)<any_cast<float>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(string)){
        if(any_cast<int>(a)>lexical_cast<float>(any_cast<string>(b)))
            return a;
        else if(any_cast<int>(a)<lexical_cast<float>(any_cast<string>(b)))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(float)&&b.type()==typeid(int)){
        if(boost::any_cast<float>(a)>boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<float>(a)<boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(float)&&b.type()==typeid(float)){
        if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(float)&&b.type()==typeid(string)){
        if(boost::any_cast<float>(a)>boost::lexical_cast<float>(boost::any_cast<string>(b)))
            return a;
        else if(boost::any_cast<float>(a)<boost::lexical_cast<float>(boost::any_cast<string>(b)))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(string)&&b.type()==typeid(int)){
        if(boost::lexical_cast<float>(boost::any_cast<string>(a))>boost::any_cast<int>(b))
            return a;
        else if(boost::lexical_cast<float>(boost::any_cast<string>(a))<boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(string)&&b.type()==typeid(float)){
        if(boost::lexical_cast<float>(boost::any_cast<string>(a))>boost::any_cast<float>(b))
            return a;
        else if(boost::lexical_cast<float>(boost::any_cast<string>(a))<boost::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(string)&&b.type()==typeid(string)){
        if(boost::lexical_cast<float>(boost::any_cast<string>(a))>boost::lexical_cast<float>(boost::any_cast<string>(b)))
            return a;
        else if(boost::lexical_cast<float>(boost::any_cast<string>(a))<boost::lexical_cast<float>(boost::any_cast<string>(b)))
            return b;
        else
            return "None";
    }
}
int main(){
    any a=5;
    any b=8.5;
    any c=compare_one(a,b);
    cout<<any_cast<float>(c);
    return 0;
}
