#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cin >> input;
    
    vector<string> result = separate_paren_groups(input);
    
    for (string group : result) {
        cout << group << endl;
    }
    
    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
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
            } else if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}