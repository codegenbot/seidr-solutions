std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;

    while (getline(ss, word, '-')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += " ";
        }
        for (char& c : words[i]) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                break;
            }
        }
        result += words[i];
    }

    return result;
}