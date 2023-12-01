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
        } else if (c == ')') {
            count--;
        }

        group += c;

        if (count == 0 && !group.empty()) {
            result.push_back(group);
            group = "";
        }
    }

    return result;
}