bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> select_words(const string& input, int word_count) {
    vector<string> words;
    istringstream iss(input);
    string word;

    for (int i = 0; i < word_count; ++i) {
        if (iss >> word) {
            words.push_back(word);
        }
    }

    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 4), vector<string>{"a", "b", "c", "d"}));
    return 0;
}