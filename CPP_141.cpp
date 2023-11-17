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
    int i, a=0, b=0;
    for(i=0;i<file_name.size();i++){
        if(file_name[i]=='.')
            a++;
        if(file_name[i]>='0'&&file_name[i]<='9')
            b++;
    }
    if(a!=1||b>3)
        return "No";
    string s1=file_name.substr(0,file_name.find('.'));
    string s2=file_name.substr(file_name.find('.')+1);
    if(s1.empty())
        return "No";
    if(s2!="txt"&&s2!="exe"&&s2!="dll")
        return "No";
    if(!(s1[0]>='a'&&s1[0]<='z')&&!(s1[0]>='A'&&s1[0]<='Z'))
        return "No";
    return "Yes";
}
