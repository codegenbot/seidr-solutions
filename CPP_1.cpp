bool issame(const vector<string> &a, const vector<string> &b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
    string test_string = "((group1)(group2)(group3))";
    vector<string> expected_groups = {"group1", "group2", "group3"};
    vector<string> result = separate_paren_groups(test_string);
    assert(issame(expected_groups, result));
    return 0;
}