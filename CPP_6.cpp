#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_level;
    int max_nesting = 0, current_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_level.push(++current_nesting);
            max_nesting = max(max_nesting, current_nesting);
        } else if (c == ')') {
            nesting_level.pop();
            current_nesting = nesting_level.empty() ? 0 : nesting_level.top();
        }
    }

    result.push_back(current_nesting);

    for (string group : split(paren_string, " ")) {
        nesting_level = stack<int>();
        current_nesting = 0;
        max_nesting = 0;

        for (char c : group) {
            if (c == '(') {
                nesting_level.push(++current_nesting);
                max_nesting = max(max_nesting, current_nesting);
            } else if (c == ')') {
                nesting_level.pop();
                current_nesting = nesting_level.empty() ? 0 : nesting_level.top();
            }
        }

        result.push_back(current_nesting);
    }

    return result;
}

vector<string> split(const string& s, const string& delimiter) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return result;
}