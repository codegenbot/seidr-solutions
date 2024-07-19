bool issame(const vector<string> &a, const vector<string> &b) {
    return a == b;
}

vector<string> separate_paren_groups(const string &paren_string) {
    vector<string> groups;
    int count = 0;
    string current_group;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }
    return groups;
}

int main() {
    string paren_string = "(()())(())";
    vector<string> result = separate_paren_groups(paren_string);
    
    vector<string> expected_result = {"()()", "()"};

    assert(issame(result, expected_result));

    return 0;
}