#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    int open_count = 0, close_count = 0;
    string group = "";
    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            open_count++;
        } else if (paren_string[i] == ')') {
            close_count++;
        }
        if (open_count > 0 && close_count == open_count) {
            groups.push_back(group);
            group = "";
            open_count = 0;
            close_count = 0;
        } else {
            group += paren_string[i];
        }
    }
    return groups;
}