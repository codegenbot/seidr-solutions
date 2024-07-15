vector<string> separate_paren_groups(string paren_string);

bool issame(const vector<string>& result, const vector<string>& expected) {
    if (result.size() != expected.size()) {
        return false;
    }
    
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != expected[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> expected = {"(ab)", "(cd)"};
    vector<string> result = separate_paren_groups("(ab)(cd)");

    assert(issame(result, expected));
    
    return 0;
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