```cpp
std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0 || !str.empty() && str[0] == '-') { 
            result += std::toupper(words[i][0]);
            result.erase(0, 1);
        } else {
            result += words[i];
        }
    }

    return result;
}