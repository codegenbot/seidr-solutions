#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string s) {
    vector<string> result;
    string current;
    int level = 0;

    for (char c : s) {
        if (c == '(') {
            level++;
            if (level > 1) {
                current += c;
            }
        } else if (c == ')') {
            level--;
            if (level > 0) {
                current += c;
            } else if (level == 0) {
                result.push_back(current);
                current.clear();
            }
        }
    }

    return result;
}