#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_level = 0;
    for(char c: paren_string){
        if(c == '(') {
            max_level++;
        } else if(c == ')') {
            max_level--;
        }
        result.push_back(max_level);
    }
    return result;
}