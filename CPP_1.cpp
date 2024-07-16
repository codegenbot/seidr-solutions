#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                result.push_back(group);
                group = "";
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group + "()");
                group = "";
            } else {
                group += ')';
            }
        } else if (open_count > 0) {
            group += c;
        }
    }

    return result;
}

int main() {
    // Test the functions here
    return 0;
}