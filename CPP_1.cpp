#include <vector>
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
    string group;

    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

int main() {
    vector<string> result = separate_paren_groups("( ) (( )) (( )( ))");
    cout << issame(result, vector<string>{"()", "(())", "(()())"});
  
    return 0;
}