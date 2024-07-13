#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

string match_parens(vector<string> lst){
    int open = 0;
    for(string s : lst) {
        for(char c : s) {
            if(c == '(') open++;
            else if(c == ')') {
                if(open <= 0) return "No";
                open--;
            }
        }
    }
    return (open == 0)? "Yes" : "No";
}