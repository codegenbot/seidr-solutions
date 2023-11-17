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
    if(a.type()==typeid(string)&&b.type()==typeid(string)){
        string s1=boost::any_cast<string>(a);
        string s2=boost::any_cast<string>(b);
        if(s1.find(',')!=std::string::npos){
            std::replace(s1.begin(),s1.end(),',','.');
        }
        if(s2.find(',')!=std::string::npos){
            std::replace(s2.begin(),s2.end(),',','.');
        }
        double d1=stod(s1);
        double d2=stod(s2);
        if(d1>d2){
            return a;
        }
        if(d1<d2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(double)&&b.type()==typeid(double)){
        double d1=boost::any_cast<double>(a);
        double d2=boost::any_cast<double>(b);
        if(d1>d2){
            return a;
        }
        if(d1<d2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(int)){
        int i1=boost::any_cast<int>(a);
        int i2=boost::any_cast<int>(b);
        if(i1>i2){
            return a;
        }
        if(i1<i2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(double)&&b.type()==typeid(int)){
        double d1=boost::any_cast<double>(a);
        int i2=boost::any_cast<int>(b);
        if(d1>i2){
            return a;
        }
        if(d1<i2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(double)){
        int i1=boost::any_cast<int>(a);
        double d2=boost::any_cast<double>(b);
        if(i1>d2){
            return a;
        }
        if(i1<d2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(string)&&b.type()==typeid(double)){
        string s1=boost::any_cast<string>(a);
        double d2=boost::any_cast<double>(b);
        if(s1.find(',')!=std::string::npos){
            std::replace(s1.begin(),s1.end(),',','.');
        }
        double d1=stod(s1);
        if(d1>d2){
            return a;
        }
        if(d1<d2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(double)&&b.type()==typeid(string)){
        string s2=boost::any_cast<string>(b);
        double d1=boost::any_cast<double>(a);
        if(s2.find(',')!=std::string::npos){
            std::replace(s2.begin(),s2.end(),',','.');
        }
        double d2=stod(s2);
        if(d1>d2){
            return a;
        }
        if(d1<d2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(string)&&b.type()==typeid(int)){
        string s1=boost::any_cast<string>(a);
        int i2=boost::any_cast<int>(b);
        if(s1.find(',')!=std::string::npos){
            std::replace(s1.begin(),s1.end(),',','.');
        }
        double d1=stod(s1);
        if(d1>i2){
            return a;
        }
        if(d1<i2){
            return b;
        }
        return "None";
    }
    if(a.type()==typeid(int)&&b.type()==typeid(string)){
        string s2=boost::any_cast<string>(b);
        int i1=boost::any_cast<int>(a);
        if(s2.find(',')!=std::string::npos){
            std::replace(s2.begin(),s2.end(),',','.');
        }
        double d2=stod(s2);
        if(i1>d2){
            return a;
        }
        if(i1<d2){
            return b;
        }
        return "None";
    }
}
int main(){
    boost::any a=compare_one(1,2.5);
    boost::any b=compare_one(1,"2,3");
    boost::any c=compare_one("5,1","6");
    boost::any d=compare_one("1",1);
    boost::any e=compare_one("1","1");
    boost::any f=compare_one(1.5,2.5);
    boost::any g=compare_one("1.5","2.5");
    boost::any h=compare_one("1.5",2.5);
    boost::any i=compare_one("1.5","2,5");
    boost::any j=compare_one(1.5,"2,5");
    boost::any k=compare_one(1.5,2);
    boost::any l=compare_one("1,5",2);
    boost::any m=compare_one(1.5,"2");
    boost::any n=compare_one("1,5","2");
    cout<<boost::any_cast<double>(a)<<endl;
    cout<<boost::any_cast<string>(b)<<endl;
    cout<<boost::any_cast<string>(c)<<endl;
    cout<<boost::any_cast<string>(d)<<endl;
    cout<<boost::any_cast<string>(e)<<endl;
    cout<<boost::any_cast<double>(f)<<endl;
    cout<<boost::any_cast<string>(g)<<endl;
    cout<<boost::any_cast<double>(h)<<endl;
    cout<<boost::any_cast<string>(i)<<endl;
    cout<<boost::any_cast<double>(j)<<endl;
    cout<<boost::any_cast<double>(k)<<endl;
    cout<<boost::any_cast<string>(l)<<endl;
    cout<<boost::any_cast<double>(m)<<endl;
    cout<<boost::any_cast<string>(n)<<endl;
    return 0;
}
