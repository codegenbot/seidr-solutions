#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";

    bool in_group = false;
    int open_brackets = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            if (in_group) { // Nested group found
                current_group += paren_string[i];
            }
            open_brackets++;
            in_group = true;
        }
        else if (paren_string[i] == ')') {
            open_brackets--;

            if (in_group && open_brackets == 0) { // End of current group
                current_group += paren_string[i];
                result.push_back(current_group);
                current_group = "";
                in_group = false;
            }
            else if (in_group && open_brackets > 0) { // Still inside a nested group
                current_group += paren_string[i];
            }
        }
    }

    return result;
}