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
    return v1 == v2;
}

int main() {
    vector<string> result = separate_paren_groups("( ) (( )) (( )( ))");
    vector<string> expected_result = {"", "", "(( ))", "(( )( ))"};

    if (issame(result, expected_result)) {
        cout << "Test case passed." << endl;
    } else {
        cout << "Test case failed." << endl;
    }

    return 0;
}