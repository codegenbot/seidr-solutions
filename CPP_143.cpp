string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<string> split(const string& str, const string& delimiters) {
    vector<string> result;
    int start = 0;
    for (int end = 0; end <= str.length(); end++) {
        if (str.find(delimiters, end) != string::npos) {
            result.push_back(str.substr(start, end - start));
            start = end + delimiters.length();
        }
    }
    result.push_back(str.substr(start));
    return result;
}