bool issame(string a, string b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (tolower(a[i]) != tolower(b[i])) {
            return false;
        }
    }
    return true;
}

vector<string> select_words(string s, int n);

int main() {
    string sentence;
    int n;
    getline(cin, sentence);
    cin >> n;

    vector<string> words = select_words(sentence, n);
    for (string word : words) {
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