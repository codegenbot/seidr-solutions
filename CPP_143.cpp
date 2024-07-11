string words_in_sentence(string sentence) {
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string& str, const string& delimiters) {
    vector<string> s;
    size_t start = 0;
    size_t end = str.find(delimiters);
    while (end != string::npos) {
        s.push_back(str.substr(start, end - start));
        start = end + delimiters.length();
        end = str.find(delimiters, start);
    }
    s.push_back(str.substr(start));
    return s;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}