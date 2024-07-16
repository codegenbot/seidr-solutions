vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

int main() {
    vector<string> expected_result;
    expected_result.push_back("(abc)(def)");
    expected_result.push_back("(ghi)");

    assert(issame(separate_paren_groups("(abc)(def)(ghi)"), expected_result));

    return 0;
}