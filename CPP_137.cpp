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
#include<iostream>
#include<string>
#include<boost/any.hpp>    //to use any type of data type
#include<boost/lexical_cast.hpp>  // to convert string to int
#include<cassert>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
    if(a.type()==typeid(int)&&b.type()==typeid(int)){
        if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(float)){
        if(boost::any_cast<int>(a)>boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<int>(a)<boost::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(string)){
        if(boost::any_cast<int>(a)>boost::lexical_cast<float>(boost::any_cast<string>(b)))
            return a;
        else if(boost::any_cast<int>(a)<boost::lexical_cast<float>(boost::any_cast<string>(b)))
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
    assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
    assert (boost::any_cast<string>(compare_one(string("5,1"), string("6"))) == "6");
    assert (boost::any_cast<string>(compare_one(string("1"), string("2,3"))) == "2,3");
    assert (boost::any_cast<string>(compare_one(string("5,1"), 6)) == "6");
    assert (boost::any_cast<string>(compare_one(string("1"), 2.3)) == "2,3");
    assert (boost::any_cast<string>(compare_one(string("1"), 2)) == "2");
    assert (boost::any_cast<string>(compare_one(1, string("2,3"))) == "2,3");
    assert (boost::any_cast<string>(compare_one(1, 2.3)) == "2.3");
    assert (boost::any_cast<string>(compare_one(1, 2)) == "2");
    assert (boost::any_cast<string>(compare_one(1.1, 2.3)) == "2.3");
    assert (boost::any_cast<string>(compare_one(1.1, 2.1)) == "2.1");
    assert (boost::any_cast<string>(compare_one(1.1, string("2.1"))) == "2.1");
    assert (boost::any_cast<string>(compare_one(1.1, string("2.3"))) == "2.3");
    return 0;
}
