```cpp
#include<string>
using namespace std;

bool simplify(string x,string n){
    int a=0,b=0,c=0,d=0;
    string s1=x.substr(1,x.size()-2);
    string s2=n.substr(1,n.size()-2);
    int i=0;
    while(i<s1.size()){
        if(s1[i]=='/'){
            a=stoi(s1.substr(0,i));
            b=stoi(s1.substr(i+1));
            break;
        }
        i++;
    }
    i=0;
    while(i<s2.size()){
        if(s2[i]=='/'){
            c=stoi(s2.substr(0,i));
            d=stoi(s2.substr(i+1));
            break;
        }
        i++;
    }
    return (a*d) == (b*c);
}