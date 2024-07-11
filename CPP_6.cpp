#include <vector>

bool areSame(vector<int> arr1, vector<int> arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }
    for (int i = 0; i < arr1.size(); ++i) {
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