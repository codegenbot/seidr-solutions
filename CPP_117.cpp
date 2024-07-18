bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            int consonants = count_if(word.begin(), word.end(), [](char ch) {
                return !strchr("aeiouAEIOU", ch) && isalpha(ch);
            });
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    int consonants = count_if(word.begin(), word.end(), [](char ch) {
        return !strchr("aeiouAEIOU", ch) && isalpha(ch);
    });
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}