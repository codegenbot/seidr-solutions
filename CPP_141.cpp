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
  int dot_count = 0;
  int digit_count = 0;
  for(int i = 0; i < file_name.size(); i++){
    if(file_name[i] == '.')
      dot_count++;
    else if(file_name[i] >= '0' && file_name[i] <= '9')
      digit_count++;
  }
  if(dot_count != 1 || digit_count > 3){
    return "No";
  }
  int dot_position = file_name.find('.');
  string before_dot = file_name.substr(0, dot_position);
  string after_dot = file_name.substr(dot_position + 1);
  if(before_dot.size() == 0 || (before_dot[0] < 'a' || before_dot[0] > 'z') || (before_dot[0] < 'A' || before_dot[0] > 'Z')){
    return "No";
  }
  if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
    return "No";
  return "Yes";
}
int main(){
  while(1){
    string file_name;
    cin >> file_name;
    cout << file_name_check(file_name) << endl;
  }
  return 0;
}
