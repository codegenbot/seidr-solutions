string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        result += sort(word.begin(), word.end()) + " ";
    }
    return result;
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}