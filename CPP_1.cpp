#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        
        if (c == '(' && count == 1) {
            group = "";
        }
        
        group += c;
        
        if (count == 0 && group.size() > 0) {
            groups.push_back(group);
        }
    }
    
    return groups;
}

int main() {
    string paren_string;
    getline(cin, paren_string);
    
    vector<string> result = separate_paren_groups(paren_string);
    
    for (string group : result) {
        cout << group << endl;
    }
    
    return 0;
}