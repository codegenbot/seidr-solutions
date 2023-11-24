std::string convertToCamelCase(const std::string& input) {
    std::string result;
    std::vector<std::string> words;
    std::string word;

    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }

    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words[i].size(); j++) {
            if (j == 0 && i != 0) {
                result += words[i][j] - 'a' + 'A';
            } else {
                result += words[i][j];
            }
        }
    }

    return result;
}