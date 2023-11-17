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
    if(a.type()==typeid(int)&&b.type()==typeid(int)){
        if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(int)&&(b.type()==typeid(float)||b.type()==typeid(string))){
        return b;
    }
    else if(b.type()==typeid(int)&&(a.type()==typeid(float)||a.type()==typeid(string))){
        return a;
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(float)){
        if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type()==typeid(float)&&b.type()==typeid(string)){
        return b;
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(float)){
        return a;
    }
    else if(a.type()==typeid(string)&&b.type()==typeid(string)){
        if(boost::any_cast<string>(a)>boost::any_cast<string>(b))
            return a;
        else if(boost::any_cast<string>(a)<boost::any_cast<string>(b))
            return b;
        else
            return "None";
    }
}
int main(){
    boost::any a,b;
    printf("Enter two values of same type or different types\n");
    scanf("%d",&a);
    string s;
    cin>>s;
    if(s.find('.')!=string::npos){
        b=std::stof(s);
    }
    else if(s.find(',')!=string::npos){
        for(int i=0;i<s.size();i++){
            if(s[i]==','){
                s[i]='.';
            }
        }
        b=std::stof(s);
    }
    else
        b=std::stoi(s);
    boost::any c=compare_one(a,b);
    if(c.type()==typeid(int)){
        printf("%d\n",boost::any_cast<int>(c));
    }
    else if(c.type()==typeid(float)){
        printf("%.1f\n",boost::any_cast<float>(c));
    }
    else{
        cout<<boost::any_cast<string>(c)<<endl;
    }
    return 0;
}
