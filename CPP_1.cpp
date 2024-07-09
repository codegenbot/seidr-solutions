#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int open_count = 0;
    string last_group = "";

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    // add the last group
    if (open_count > 0) {
        while (open_count > 0) {
            last_group += '(';
            open_count--;
        }
        result.push_back(last_group + ')');
    } else {
        result.push_back(last_group);
    }

    return result;
}