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
    string output;
    for(int i=0; i*l+l < s.length(); i++){
        string str = s.substr(i*3, 3);
        if(str.length() == 2) str += "0";
        for (int j=1; j<str.length(); j++) {
            output += str[j-1];
        }
        output += str[0];
    }
    return output;
}