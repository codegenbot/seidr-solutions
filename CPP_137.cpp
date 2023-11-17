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
    string t1=a.type().name();
    string t2=b.type().name();
    if(t1==t2){
        if(t1=="i"){
            if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
                return a;
            else if(boost::any_cast<int>(a)==boost::any_cast<int>(b))
                return "None";
            else
                return b;
        }
        else if(t1=="d"){
            if(boost::any_cast<double>(a)>boost::any_cast<double>(b))
                return a;
            else if(boost::any_cast<double>(a)==boost::any_cast<double>(b))
                return "None";
            else
                return b;
        }
        else if(t1=="NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"){
            string sa=boost::any_cast<string>(a);
            string sb=boost::any_cast<string>(b);
            if(sa.find(",")!=-1)
                sa.replace(sa.find(","),",");
            if(sb.find(",")!=-1)
                sb.replace(sb.find(","),",");
            if(stod(sa)>stod(sb))
                return a;
            else if(stod(sa)==stod(sb))
                return "None";
            else
                return b;
        }
    }
    else{
        if(t1=="NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"){
            string sa=boost::any_cast<string>(a);
            if(sa.find(",")!=-1)
                sa.replace(sa.find(","),",");
            if(t2=="i"){
                if(stod(sa)>boost::any_cast<int>(b))
                    return a;
                else
                    return b;
            }
            else{
                if(stod(sa)>boost::any_cast<double>(b))
                    return a;
                else
                    return b;
            }
        }
        else{
            string sb=boost::any_cast<string>(b);
            if(sb.find(",")!=-1)
                sb.replace(sb.find(","),",");
            if(t1=="i"){
                if(boost::any_cast<int>(a)>stod(sb))
                    return a;
                else
                    return b;
            }
            else{
                if(boost::any_cast<double>(a)>stod(sb))
                    return a;
                else
                    return b;
            }
        }
    }
}
int main(){
    cout<<compare_one(1, "2,3")<<endl;
    cout<<compare_one("5,1", "6")<<endl;
    cout<<compare_one("1", 1)<<endl;
    cout<<compare_one(1, 2.5)<<endl;
}
