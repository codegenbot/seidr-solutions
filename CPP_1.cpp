#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open = 0, close = 0;
    string temp = "";

    for (char c : paren_string) {
        if (c == '(') {
            open++;
            temp += c;
        } else if (c == ')') {
            close++;
            temp += c;

            if (open == close) {
                result.push_back(temp);
                temp.clear();
                open = 0, close = 0;
            }
        }
    }

    return result;
}