/*
Input to this function is a string containing multiple groups of nested parentheses. Your goal is to
separate those group into separate strings and return the vector of those.
Separate groups are balanced (each open brace is properly closed) and not nested within each other
Ignore any spaces in the input string.
>>> separate_paren_groups("( ) (( )) (( )( ))")
{"()", "(())", "(()())"}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> separate_paren_groups(string paren_string){
vector<string> result;
for(int i = 0; i < paren_string.size(); i++){
    if(paren_string[i] == '('){
        string temp;
        while(paren_string[i] != ')'){
            temp += paren_string[i];
            i++;
        }
        temp += ')';
        result.push_back(temp);
    }
}
return result;
}
