#include <vector>

bool areSame(int* arr1, int* arr2, int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_depth = 0;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth);
    return result;
}