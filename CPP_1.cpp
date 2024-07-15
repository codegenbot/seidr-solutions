vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> test_case = separate_paren_groups("( ) (( )) (( )( ))");
    vector<string> expected_result = {"", "", "(( ))", "(( )( ))"};

    if (issame(test_case, expected_result)) {
        cout << "Test case passed." << endl;
    } else {
        cout << "Test case failed." << endl;
    }

    return 0;
}