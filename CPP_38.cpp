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
        if(i==(num-1) && l%3!=0) x = s.substr(i*3,l%3);
        else x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(1)+x[0];
        output=output+x;
    }
    return output;
}

string decode_cyclic(string s){ 
    int l=s.length();
    string x,output;
    for(int i=0;i<l;i++){
        if(i==0 || (i+1)%3!=0) x+=s[i];
        else{
            x+=s[i-2];
            x+=s[i-1];
        }
    }
    return x;
}