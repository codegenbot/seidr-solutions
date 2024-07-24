string words_in_sentence(string sentence){
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result;
}

vector<string> split(const string& str, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prevPos = 0;
    while ((pos = str.find(delimiter, prevPos)) != string::npos) {
        tokens.push_back(str.substr(prevPos, pos - prevPos));
        prevPos = pos + delimiter.length();
    }
    tokens.push_back(str.substr(prevPos));
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}