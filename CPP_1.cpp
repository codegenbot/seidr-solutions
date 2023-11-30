#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(' || c == ')') {
            current_group += c;
        }
    }

    int open_braces = 0;
    string current_paren;

    for (char c : current_group) {
        if (c == '(') {
            open_braces++;
            current_paren += c;
        } else if (c == ')') {
            open_braces--;
            current_paren += c;

            if (open_braces == 0) {
                result.push_back(current_paren);
                current_paren = "";
            }
        }
    }

    return result;
}