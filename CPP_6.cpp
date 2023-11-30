#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_depth = 0;
    int current_depth = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (paren_string[i] == ')') {
            current_depth--;
        } else if (paren_string[i] == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }

    result.push_back(max_depth);

    return result;
}

int main() {
    string input;
    getline(cin, input);

    vector<int> result = parse_nested_parens(input);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}