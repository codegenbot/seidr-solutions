std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", tolower(c))) {
            result += (isupper(c)?toupper(c):c);
        }
    }
    return result;
}