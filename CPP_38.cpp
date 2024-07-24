#include<stdio.h>
#include<string>
using namespace std;

string decode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string output,x;
    for (int i=0;i<num;i++){
        x=s.substr(i*3,3);
        if(x.length()==1)output+=x+x[0];
        else output+=x;
    }
    return output;
}