vector<string> split(const string& s) {
    vector<string> result;
    size_t start = 0;
    while (start < s.length()) {
        size_t end = s.find(' ', start);
        if (end == -1) end = s.length();
        result.push_back(s.substr(start, end-start));
        start = end + 1;
    }
    return result;
}

string words_in_sentence(string sentence) {
    vector<string> words = split(sentence);
    string result;
    for (const auto& word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1); // remove trailing space
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}