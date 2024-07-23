std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (strchr("aeiouAEIOU", tolower(c))) {
            continue;
        }
        result += c;
    }
    return result;
}