#include<stdio.h>
#include<string>
using namespace std;

bool cycpattern_check(string a,string b){
    int n = a.length();
    int m = b.length();
    for(int i=0; i<n-m+1; i++){
        string s = a.substr(i,m);
        if(s==b || s+b.substr(0,1)+s==(a).substr(0,m)){
            return true;
        }
    }
    return false;
}