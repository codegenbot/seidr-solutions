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
#include<string>
using namespace std;
bool cycpattern_check(string a,string b){
  int i,j=0,k=0;
  for(i=0;a[i]!='\0';i++){
    if(a[i]==b[j]){
      j++;
      if(b[j]=='\0'){
        return true;
      }
    }
  }
  for(i=0;a[i]!='\0';i++){
    if(a[i]==b[k]){
      k++;
      if(b[k]=='\0'){
        return true;
      }
    }
  }
  return false;
}
int main(){
  string a,b;
  cin>>a>>b;
  cout<<cycpattern_check(a,b);
  return 0;
}
