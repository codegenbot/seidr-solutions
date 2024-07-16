bool issame(vector<string> a, vector<string> b) {
    return a == b;
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
    vector<string> input = separate_paren_groups("((a)(b))((c)(d))");
    vector<string> expected = {"(a)(b)", "(c)(d)"};
    assert(issame(input, expected));

    return 0;
}