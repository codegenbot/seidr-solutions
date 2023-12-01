#include <iostream>
#include <cassert>

using namespace std;

string encode_cyclic(string s){
    // implementation of encode_cyclic function
    // ...
    return s; // add this return statement
}

string decode_cyclic(string s){ 
    string output;
    int l=s.length();
    int num=(l+2)/3;
    string x;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x[2]+x.substr(0,2);
        output=output+x;
    }
    return output;
}