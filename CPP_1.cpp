#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

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
    return a == b;
}

int main() {
    vector<string> test1 = separate_paren_groups("(abc)(def)(ghi)");
    vector<string> expected1 = {"abc", "def", "ghi"};
    assert(issame(test1, expected1));

    vector<string> test2 = separate_paren_groups("((a)(((b)))((c)))(d)");
    vector<string> expected2 = {"a", "b", "c", "d"};
    assert(issame(test2, expected2));

    cout << "All tests passed successfully!" << endl;

    return 0;
}