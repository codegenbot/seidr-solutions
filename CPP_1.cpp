bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    vector<string> result = separate_paren_groups("((group1)(group2)(group3))");
    vector<string> expected_result = {"(group1)", "(group2)", "(group3)"};

    if (issame(result, expected_result)) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}