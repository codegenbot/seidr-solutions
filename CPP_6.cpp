#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int max_level = 0;
    int curr_level = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            curr_level++;
            max_level = max(max_level, curr_level);
        } else if (paren_string[i] == ')') {
            curr_level--;
        } else if (paren_string[i] == ' ') {
            levels.push_back(max_level);
            max_level = 0;
            curr_level = 0;
        }
    }

    levels.push_back(max_level);
    return levels;
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