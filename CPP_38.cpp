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
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i<num;i++)
    {
        if (s.length()>(i*3+1)) // check if current group has 3 elements
            output+=s.substr(i*3+1,1)+s.substr(i*3,2);
        else 
            output+=s;
    }
    return output;
}