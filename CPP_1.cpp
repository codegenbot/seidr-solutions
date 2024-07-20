bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    vector<string> test_input = {"(abc)", "(def)", "((ghi)(jkl))"};
    vector<string> expected_output = {"(abc)", "(def)", "((ghi)(jkl))"};

    assert(issame(separate_paren_groups("((abc)(def)((ghi)(jkl)))"), expected_output));

    return 0;
}