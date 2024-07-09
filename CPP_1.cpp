#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    
    for (char c : paren_string) {
        if (c == '(' || c == ')') {
            if (current_group.empty() || current_group.back() == '(' && c == ')') {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
                while (!current_group.empty() && current_group.back() != '(') {
                    current_group.pop_back();
                }
                if (!current_group.empty()) {
                    current_group.pop_back();
                }
                current_group += c;
            }
        } else {
            current_group += c;
        }
    }
    
    result.push_back(current_group);
    return result;
}