std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    size_t pos = 0;
    while (pos < s.size()) {
        if (s[pos] == '-') {
            pos++;
        } else if (s[pos] == ' ') {
            words.push_back("");
            pos++;
        } else {
            size_t nextPos = s.find_first_of("- ", pos);
            if (nextPos == std::string::npos) {
                nextPos = s.size();
            }
            words.push_back(s.substr(pos, nextPos - pos));
            pos = nextPos;
        }
    }
    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += "";
        }
        if (!word.empty()) {
            result += toupper(word[0]);
            result += tolower(word.substr(1));
        }
    }
    return result;
}