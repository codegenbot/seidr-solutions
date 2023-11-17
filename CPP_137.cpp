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
    if (a.type()==typeid(int)&&b.type()==typeid(int)){
        if (boost::any_cast<int>(a)>boost::any_cast<int>(b))
        return a;
        else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
        return b;
        else return "None";
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(float)){
        if (boost::any_cast<float>(a)>boost::any_cast<float>(b))
        return a;
        else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
        return b;
        else return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(string)){
        if (boost::any_cast<string>(a)>boost::any_cast<string>(b))
        return a;
        else if(boost::any_cast<string>(a)<boost::any_cast<string>(b))
        return b;
        else return "None";
    }
    else if(a.type()==typeid(int)&&b.type()==typeid(string)){
        float temp=stof(boost::any_cast<string>(b));
        if (boost::any_cast<int>(a)>temp)
        return a;
        else if(boost::any_cast<int>(a)<temp)
        return b;
        else return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(int)){
        float temp=stof(boost::any_cast<string>(a));
        if (boost::any_cast<int>(b)>temp)
        return b;
        else if(boost::any_cast<int>(b)<temp)
        return a;
        else return "None";
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(string)){
        float temp=stof(boost::any_cast<string>(b));
        if (boost::any_cast<float>(a)>temp)
        return a;
        else if(boost::any_cast<float>(a)<temp)
        return b;
        else return "None";
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(float)){
        float temp=stof(boost::any_cast<string>(a));
        if (boost::any_cast<float>(b)>temp)
        return b;
        else if(boost::any_cast<float>(b)<temp)
        return a;
        else return "None";
    }
    else return "None";
}
int main(){
    int a=1,b=2;
    float c=1.2,d=2.1;
    string e="1.2",f="2.1";
    boost::any temp1=a;
    boost::any temp2=b;
    boost::any temp3=c;
    boost::any temp4=d;
    boost::any temp5=e;
    boost::any temp6=f;
    boost::any temp7=compare_one(temp1,temp2);
    boost::any temp8=compare_one(temp3,temp4);
    boost::any temp9=compare_one(temp5,temp6);
    boost::any temp10=compare_one(temp1,temp5);
    boost::any temp11=compare_one(temp2,temp6);
    boost::any temp12=compare_one(temp3,temp5);
    boost::any temp13=compare_one(temp4,temp6);
    int ans1=boost::any_cast<int>(temp7);
    float ans2=boost::any_cast<float>(temp8);
    string ans3=boost::any_cast<string>(temp9);
    string ans4=boost::any_cast<string>(temp10);
    string ans5=boost::any_cast<string>(temp11);
    string ans6=boost::any_cast<string>(temp12);
    string ans7=boost::any_cast<string>(temp13);
    printf("%d\n",ans1);
    printf("%f\n",ans2);
    printf("%s\n",ans3.c_str());
    printf("%s\n",ans4.c_str());
    printf("%s\n",ans5.c_str());
    printf("%s\n",ans6.c_str());
    printf("%s\n",ans7.c_str());
    return 0;
}
