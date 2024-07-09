std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        result += tolower(words[i][0]);
        if (i > 0) {
            result += toupper(words[i].substr(1));
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}