#include<stdio.h>
#include<string>
using namespace std;

string decode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string output,x;
    int i;
    for (i=0;i<num;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==1) x=x+x[0]+x[0];
        else if (x.length()==2) x=x[1]+x[0];
        output=output+x;
    }
    return output;
}