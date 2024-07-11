string words_in_sentence(string sentence) {
    string result = "";
    for (const auto &word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

vector<string> split(const string &s, const char &c) {
    vector<string> arr;
    size_t i = 0;

    while ((i = s.find(c)) != stdstring::npos) {
        arr.push_back(s.substr(0, i));
        s = s.substr(i + 1);
    }

    arr.push_back(s);

    return arr;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}