#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(const string paren_string);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(const string paren_string) {
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
            } else {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

int main() {
    vector<string> a = separate_paren_groups("((()))");
    vector<string> b = separate_paren_groups("((())())");

    assert(issame(a, b));

    return 0;
}