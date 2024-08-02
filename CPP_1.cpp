#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current = "";
    int count = 0;
    
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            count++;
            current += paren_string[i];
        } else if (paren_string[i] == ')') {
            count--;
            current += paren_string[i];
            if (count == 0) {
                result.push_back(current);
                current = "";
            }
        }
    }
    
    return result;
}