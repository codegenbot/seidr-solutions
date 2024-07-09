string words_in_sentence(string sentence){
    string result = "";
    for (const auto& word : split(sentence, ' ')) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0, pos2 = 0;
    while ((pos2 = str.find(c, pos)) != string::npos) {
        tokens.push_back(str.substr(pos, pos2 - pos));
        pos = pos2 + 1;
    }
    tokens.push_back(str.substr(pos));
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}