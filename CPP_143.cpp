string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<string> split(const string& str, const string& delim) {
    vector<string> result;
    size_t pos = 0;
    size_t prev_pos = 0;
    while ((pos = str.find(delim, prev_pos)) != string::npos) {
        if (prev_pos < pos) {
            result.push_back(str.substr(prev_pos, pos - prev_pos));
        }
        prev_pos = pos + delim.size();
    }
    if (prev_pos <= str.size()) {
        result.push_back(str.substr(prev_pos));
    }
    return result;
}