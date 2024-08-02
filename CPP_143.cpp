string words_in_sentence(string sentence){
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
    string token;
    for (const auto& ch : str) {
        if (ch == c) {
            tokens.push_back(token);
            token = "";
        } else {
            token += ch;
        }
    }
    tokens.push_back(token);
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}