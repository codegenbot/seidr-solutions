string words_in_sentence(string sentence){
    string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result;
}

vector<string> split(const string& s, const string& delimiter) {
    vector<string> elements;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        elements.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    elements.push_back(s);
    return elements;
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}