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
#include<assert.h>
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
    assert  (cycpattern_check("winemtt","ttinem") == true );
    assert  (cycpattern_check("winemtt","tttinem") == true );
    assert  (cycpattern_check("winemtt","ttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","tttttttttttttttttttttttttttttttttttttttttinem") == true );
    assert  (cycpattern_check("winemtt","ttttttttttttttttttttttttttttttttttttttttttinem") == true );
    return 0;
}
