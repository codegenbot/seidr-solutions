bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<string> select_words(string s, int n);

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            char lowercase_c = tolower(c);
            if (lowercase_c != 'a' && lowercase_c != 'e' && lowercase_c != 'i' && lowercase_c != 'o' && lowercase_c != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }

    if (consonant_count == n) {
        words.push_back(word);
    }

    return words;
}