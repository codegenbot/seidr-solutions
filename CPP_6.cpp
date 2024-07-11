#include <vector>

bool issame(vector<int> v1, vector<int> v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> parse_nested_parens(string paren_string);

int main() {
    // Call the parse_nested_parens function here if needed
    return 0;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
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
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }

    depths.push_back(max_depth);

    return depths;
}