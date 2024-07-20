std::string toCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto& word : split(s, " -")) {
        if (first) {
            result += word;
            first = false;
        } else {
            result += toupper(word[0]);
            result += word.substr(1).erase(0, 1);
        }
    }

    return result;
}