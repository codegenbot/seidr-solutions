#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(const string& input) {
    vector<string> groups;
    int count = 0;
    string temp = "";

    for (char c : input) {
        if (c == '(') {
            if (count > 0) {
                temp += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp += c;
            }
            if (count == 0 && !temp.empty()) {
                groups.push_back(temp);
                temp = "";
            }
        }
    }
    return groups;
}