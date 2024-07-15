bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ') {
            int consonant_count = count_if(word.begin(), word.end(), [](char c) {
                return !strchr("aeiouAEIOU", c) && isalpha(c);
            });
            if (consonant_count == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += c;
        }
    }
    int consonant_count = count_if(word.begin(), word.end(), [](char c) {
        return !strchr("aeiouAEIOU", c) && isalpha(c);
    });
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("hello world goodbye", 2), {"hello", "goodbye"}));
}