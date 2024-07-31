bool issame(string a, string b) {
    return a == b;
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

int main() {
    string a, b;
    getline(cin, a);
    cin >> b;

    vector<string> words = select_words(a, b);

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}