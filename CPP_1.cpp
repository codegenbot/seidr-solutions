#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;

    int start = 0;
    int end = 0;
    int count = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            if (count == 0) {
                start = i;
            }
            count++;
        }

        if (paren_string[i] == ')') {
            count--;
            if (count == 0) {
                end = i;
                groups.push_back(paren_string.substr(start, end - start + 1));
            }
        }
    }

    return groups;
}