#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_level = 0;
    int current_level = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            current_level++;
            max_level = max(max_level, current_level);
        }
        else if (paren_string[i] == ')') {
            current_level--;
        }
        else if (paren_string[i] == ' ') {
            result.push_back(max_level);
            max_level = 0;
            current_level = 0;
        }
    }

    result.push_back(max_level);

    return result;
}

int main() {
    string input;
    getline(cin, input);

    vector<int> output = parse_nested_parens(input);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}