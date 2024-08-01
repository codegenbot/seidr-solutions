#include<stdio.h>
#include<string>
using namespace std;

string encode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i<num;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(1)+x[0];
        else if(x.length() == 2) x = x + "0";
        output=output+x;
    }
    return output;
}

string decode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i<num;i++)
    {
        if(i < l/3) x=s.substr(i*3,3);
        else x=s.substr(i*3,l%3);
        if(x.length() == 3) x=x[1]+x[0];
        output=output+x;
    }
    return output;
}