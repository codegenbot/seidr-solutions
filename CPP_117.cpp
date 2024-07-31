bool issame(char a, char b) {
    return tolower(a) == tolower(b);
}

vector<string> select_words(string s, int n);

int main() {
    string s;
    int n;
    cin >> s >> n;
    vector<string> b = select_words(s, n);
    for (string word : b) {
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
            if (isalpha(c) && !strchr("aeiouAEIOU", c) && !consonant_count) {
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