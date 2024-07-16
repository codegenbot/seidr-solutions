bool issame(vector<string> vec1, vector<string> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
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
    vector<string> expected_result = separate_paren_groups(input);
    
    if (issame(result, expected_result)) {
        cout << "The results are the same." << endl;
    } else {
        cout << "The results are different." << endl;
    }
    
    return 0;
}