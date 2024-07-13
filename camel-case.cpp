```
std::string kebabToCamel(const std::string& s) {
    std::istringstream iss(s);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (!result.empty()) {
            result += word[0] | 32;
            for (int i = 1; i < word.size(); ++i) {
                result += tolower(word[i]);
            }
        } else {
            result = toupper(word[0]) + std::string(word.begin() + 1, word.end());
        }
    }

    return result;
}