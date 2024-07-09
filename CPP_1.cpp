vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Include the necessary header file where separate_paren_groups function is declared
    
    string input;
    cin >> input;
    
    vector<string> result = separate_paren_groups(input);
    
    for (string group : result) {
        cout << group << " ";
    }
    
    return 0;
}