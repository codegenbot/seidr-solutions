string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, ' ')) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0, prev = 0;
    while ((pos = str.find(c, prev)) != string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }
    tokens.push_back(str.substr(prev));
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}