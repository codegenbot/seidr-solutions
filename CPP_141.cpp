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
    int count = 0;
    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] == '.'){
            if(file_name[i+1] == 't' && file_name[i+2] == 'x' && file_name[i+3] == 't'){
                count++;
            }
            if(file_name[i+1] == 'e' && file_name[i+2] == 'x' && file_name[i+3] == 'e'){
                count++;
            }
            if(file_name[i+1] == 'd' && file_name[i+2] == 'l' && file_name[i+3] == 'l'){
                count++;
            }
        }
    }
    if(count == 0){
        return "No";
    }
    else{
        return "Yes";
    }
}

int main(){
    printf("%s", file_name_check("example.txt").c_str());
}
