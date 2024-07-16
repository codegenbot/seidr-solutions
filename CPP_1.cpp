bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    // Test cases
    vector<string> test_input = {"(a(b)c)", "(d(e)f)", "((g)h)"};
    vector<vector<string>> expected_output = {{"a(b)c"}, {"d(e)f"}, {"(g)h"}};

    for (int i = 0; i < test_input.size(); ++i) {
        vector<string> result = separate_paren_groups(test_input[i]);
        if (issame(result, expected_output[i])) {
            cout << "Test case " << i + 1 << ": Passed" << endl;
        } else {
            cout << "Test case " << i + 1 << ": Failed" << endl;
        }
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}