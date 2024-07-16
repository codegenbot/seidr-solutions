bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group.push_back(c);
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group.push_back(c);
            } else if (balance == 0 && !current_group.empty()) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    vector<string> input = {"(a)(b)", "(c)(d)(e)"};
    vector<string> expected = {"(a)", "(b)", "(c)", "(d)", "(e)"};
    vector<string> result = separate_paren_groups(input[0]);
    assert(issame(result, expected));

    return 0;
}