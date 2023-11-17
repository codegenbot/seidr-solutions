/*
Create a function which takes a string representing a file's name, and returns
"Yes" if the the file's name is valid, and returns "No" otherwise.
A file's name is considered to be valid if and only if all the following conditions 
are met:
- There should not be more than three digits ('0'-'9') in the file's name.
- The file's name contains exactly one dot "."
- The substring before the dot should not be empty, and it starts with a letter from 
the latin alphapet ('a'-'z' and 'A'-'Z').
- The substring after the dot should be one of these: {'txt", "exe", "dll"}
Examples:
file_name_check("example.txt") => "Yes"
file_name_check("1example.dll")  => "No" // (the name should start with a latin alphapet letter)
*/
#include<stdio.h>
#include<string>
using namespace std;
string file_name_check(string file_name){
  if(file_name.find(".")==-1) return "No";
  string pre = file_name.substr(0, file_name.find("."));
  string post = file_name.substr(file_name.find("."));
  if(pre.length()==0 || !(pre[0]>='a'&&pre[0]<='z'||pre[0]>='A'&&pre[0]<='Z')) return "No";
  if(post!=".txt"&&post!=".exe"&&post!=".dll") return "No";
  int count = 0;
  for(int i=0;i<pre.length();i++){
    if(pre[i]>='0'&&pre[i]<='9') count++;
    if(count>3) return "No";
  }
  return "Yes";
}
int main(){
  string file_name;
  cin>>file_name;
  cout<<file_name_check(file_name)<<endl;
  return 0;
}
