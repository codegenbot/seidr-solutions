vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string input;
    int n;
    
    cin >> input >> n;
    
    vector<string> selected_words = select_words(input, n);
    vector<string> comparison_vector = {"apple", "banana", "cherry"};
    
    if (issame(selected_words, comparison_vector)) {
        cout << "Selected words match comparison vector." << endl;
    } else {
        cout << "Selected words do not match comparison vector." << endl;
    }
    
    return 0;
}