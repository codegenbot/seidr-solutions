std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, '-');
    
    if (words.empty()) {
        return "";
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result += (i != 0 ? "" : std::tolower(words[i][0])) + words[i].substr(1);
        } else {
            result += std::tolower(words[i][0]) + words[i].substr(1);
        }
    }
    
    return (words.empty() ? "" : result);
}