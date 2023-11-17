#include<stdio.h>
#include<string>
#include<algorithm>
#include<any>
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
    else if(a.type()==typeid(float)&&b.type()==typeid(float)){
        if(any_cast<float>(a)>any_cast<float>(b))
            return a;
        else if(any_cast<float>(a)<any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(string)){
        if(any_cast<string>(a)>any_cast<string>(b))
            return a;
        else if(any_cast<string>(a)<any_cast<string>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(int)&&b.type()==typeid(float)){
        if(any_cast<int>(a)>any_cast<float>(b))
            return a;
        else if(any_cast<int>(a)<any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(int)&&b.type()==typeid(string)){
        if(any_cast<int>(a)>stof(any_cast<string>(b)))
            return a;
        else if(any_cast<int>(a)<stof(any_cast<string>(b)))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(int)){
        if(any_cast<float>(a)>any_cast<int>(b))
            return a;
        else if(boost::any_cast<float>(a)<boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(string)){
        if(boost::any_cast<float>(a)>stof(boost::any_cast<string>(b)))
            return a;
        else if(boost::any_cast<float>(a)<stof(boost::any_cast<string>(b)))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(int)){
        if(stof(boost::any_cast<string>(a))>boost::any_cast<int>(b))
            return a;
        else if(stof(boost::any_cast<string>(a))<boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(float)){
        if(stof(boost::any_cast<string>(a))>boost::any_cast<float>(b))
            return a;
        else if(stof(boost::any_cast<string>(a))<boost::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else
        return "None";
}
