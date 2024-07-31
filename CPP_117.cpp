bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    string input_string;
    int n;
    getline(cin, input_string);
    cin >> n;
    
    vector<string> selected_words = select_words(input_string, n);
    
    return 0;
}