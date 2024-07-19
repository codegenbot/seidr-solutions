std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(),
                              [](char c) { return std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u'; }), text.end());
    return text;
}