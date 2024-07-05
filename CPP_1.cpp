#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

// Forward declarations
vector<string> separate_paren_groups(string paren_string);
bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == ' ') continue;
        current_group += c;
        if (c == '(') balance++;
        if (c == ')') balance--;
        if (balance == 0 && !current_group.empty()) {
            result.push_back(current_group);
            current_group.clear();
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(separate_paren_groups("() ((())) (()())"), {"()", "((()))", "(()())"}));
    cout << "All test cases pass." << endl;
    return 0;
}