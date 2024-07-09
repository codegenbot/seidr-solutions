#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            current_group += c;
        } else if (c == ')') {
            depth--;
            current_group += c;
            if (depth == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}