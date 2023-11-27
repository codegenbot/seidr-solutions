#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp;
    
    for (char c : paren_string) {
        if (c == '(' || c == ')') {
            temp += c;
        }
    }
    
    int count = 0;
    string group;
    
    for (char c : temp) {
        if (c == '(') {
            count++;
            group += c;
        } else if (c == ')') {
            count--;
            group += c;
            
            if (count == 0) {
                result.push_back(group);
                group.clear();
            }
        }
    }
    
    return result;
}