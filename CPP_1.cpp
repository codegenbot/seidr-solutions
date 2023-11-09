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
    vector<string> output;
    string temp;
    int count = 0;
    for(int i=0; i<paren_string.size(); i++) {
        if(paren_string[i]!=' ') {
            temp.push_back(paren_string[i]);
            if(paren_string[i]=='(') count++;
            else count--;
        }
        if(count==0) {
            output.push_back(temp);
            temp.clear();
        }
    }
    return output;
}
