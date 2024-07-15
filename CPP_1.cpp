#include <vector>
#include <iostream>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b);

vector<string> separate_paren_groups(const string& paren_string);

int main() {
    string input;
    cin >> input;
    vector<string> groups = separate_paren_groups(input);

    assert(issame(groups, {"(abc)", "(def)(ghi)"}) && "Test Case 1 Failed!");

    return 0;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                group += c;
            }
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