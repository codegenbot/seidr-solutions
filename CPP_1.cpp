#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

int main() {
    vector<string> result = separate_paren_groups("((group 1)(group 2))");
    assert(issame(result, {"(group 1)", "(group 2)"}));
    
    result = separate_paren_groups("(a(b(c)d)e)");
    assert(issame(result, {"(a(b(c)d)e)"}));
    
    result = separate_paren_groups("(hello)(world)");
    assert(issame(result, {"(hello)", "(world)"}));
    
    cout << "All test cases passed." << endl;
    
    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }

    return true;
}