bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    string paren_string = "((group1)(group2)(group3))";
    vector<string> expected_result = {"group1", "group2", "group3"};
    
    vector<string> result = separate_paren_groups(paren_string);
    
    assert(issame(result, expected_result));
    
    return 0;
}