std::string remove_vowels(std::string text) {
    for (auto& c : text)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
            tolower(c) == 'o' || tolower(c) == 'u')
            text.erase(text.find(c), 1);
    return text;
}