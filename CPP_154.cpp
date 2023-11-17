/*
You are given 2 words. You need to return true if the second word or any of its rotations is a substring in the first word
cycpattern_check("abcd","abd") => false
cycpattern_check("hello","ell") => true
cycpattern_check("whassup","psus") => false
cycpattern_check("abab","baa") => true
cycpattern_check("efef","eeff") => false
cycpattern_check("himenss",'simen") => true

*/
#include<stdio.h>
#include<string.h>
using namespace std;
bool cycpattern_check(string a,string b){
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(strcmp(a,b)==0){
            return true;
        }
        char temp=a[0];
        for(int j=0;j<len-1;j++){
            a[j]=a[j+1];
        }
        a[len-1]=temp;
    }
    return false;
}
int main(){
    assert  (cycpattern_check("winemtt","tinem") == true );
    return 0;
}
