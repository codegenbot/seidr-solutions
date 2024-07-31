bool issame(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
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
    string a = "hello world";
    vector<string> b = select_words(a, 2);
    return 0;
}