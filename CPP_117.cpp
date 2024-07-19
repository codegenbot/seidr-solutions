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
    string s = "apple banana cherry";
    int n = 2;
    
    vector<string> expected = {"cherry"};
    vector<string> result = select_words(s, n);
    
    if (issame(result, expected)) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }
    
    return 0;
}