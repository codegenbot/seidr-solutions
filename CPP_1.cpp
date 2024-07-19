bool issame(vector<string> a, vector<string> b);
vector<string> separate_paren_groups(const string &paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    string input = "((group1)(group2)((group3)))";
    vector<string> expected_output = {"(group1)", "(group2)", "((group3))"};

    vector<string> result = separate_paren_groups(input);
    assert(issame(result, expected_output));
    
    return 0;
}