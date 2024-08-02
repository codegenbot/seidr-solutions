#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open_cnt = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_cnt > 0) {
                current_group += c;
            }
            open_cnt++;
        } else if (c == ')') {
            open_cnt--;
            if (open_cnt > 0) {
                current_group += c;
            } else {
                result.push_back(current_group + ')');
                current_group = "";
            }
        }
    }
    
    result.push_back(current_group);
    return result;
}