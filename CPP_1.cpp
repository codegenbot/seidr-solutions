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
    string input;
    cin >> input;
    
    vector<string> result = separate_paren_groups(input);
    
    vector<string> expected_result;
    // Populate expected_result with the expected output
    
    if (issame(result, expected_result)) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }
    
    return 0;
}