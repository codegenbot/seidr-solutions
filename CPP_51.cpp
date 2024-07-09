std::string remove_vowels(std::string text){
    for (auto& c : text) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isvowel(char c) {
    char lower = tolower(c);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}