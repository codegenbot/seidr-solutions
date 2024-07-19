bool issame(int a, int b) {
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);
    
    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }

    string word;
    int consonant_count = 0;
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
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