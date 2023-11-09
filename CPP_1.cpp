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
    int len = paren_string.length();
    int start = 0;
    int end = 0;
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (paren_string[i] == '(') {
            count++;
            if (count == 1) {
                start = i;
            }
        }
        if (paren_string[i] == ')') {
            count--;
            if (count == 0) {
                end = i;
                result.push_back(paren_string.substr(start, end - start + 1));
            }
        }
    }
    return result;
}
