#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            group += c;
        } else if (c == ')') {
            count--;
            group += c;
            
            if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<string> groups = separate_paren_groups(input);
    
    for (string group : groups) {
        cout << group << endl;
    }
    
    return 0;
}