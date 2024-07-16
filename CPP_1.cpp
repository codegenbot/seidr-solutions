vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

int main() {
    vector<string> expected_result;
    // Add expected output to expected_result vector

    assert(issame(separate_paren_groups("((ab)(cd))"), expected_result));
    assert(issame(separate_paren_groups("((ef)gh)"), expected_result));

    return 0;
}