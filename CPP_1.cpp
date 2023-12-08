
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open = 0, close = 0;
    string temp = "";
    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            open++;
            temp += paren_string[i];
        } else if (paren_string[i] == ')') {
            close++;
            temp += paren_string[i];
            if (open == close) {
                result.push_back(temp);
                temp = "";
                open = 0;
                close = 0;
            }
        } else {
            temp += paren_string[i];
        }
    }
    return result;
}