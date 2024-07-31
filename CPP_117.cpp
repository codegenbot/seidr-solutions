bool issame(const string& a, const string& b) {
    return a.size() == b.size();
}

vector<string> select_words(string s, int n);

int main() {
    string input;
    int n;
    getline(cin, input);
    cin >> n;

    vector<string> result = select_words(input, n);

    for (const string &word : result) {
        cout << word << endl;
    }

    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else {
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}