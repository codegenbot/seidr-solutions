#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    // Your implementation here
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
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
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}

int main() {
    // Your main function implementation here
    return 0;
}