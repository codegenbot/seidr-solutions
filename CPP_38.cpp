#include<stdio.h>
#include<string>
using namespace std;

string encode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(1)+x[0];
        output=output+x;
    }
    return output;
}

string decode_cyclic(string s){ 
    int l=s.length();
    string t,output;
    for(int i=0;i<l;i+=2){
        t=s.substr(i,2);
        if(i+l-i-2>=s.length())output+=t+s.substr(i);
        else output+=t+t[0];
    }
    return output;
}