#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_level = max(max_level, 1);
        } else if (c == ')') {
            int level = nesting_levels.top();
            nesting_levels.pop();
            if (!nesting_levels.empty()) {
                max_level = max(max_level, level + 1);
            }
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string str = "(()(())((())))";
    vector<char> charVector(str.begin(), str.end()); // Convert the input string to vector of characters
    vector<int> result = parse_nested_parens(string(charVector.begin(), charVector.end())); // Call the function with converted vector of characters
    return 0;
}