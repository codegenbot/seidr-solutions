string encode(string message){
    auto is_vowel = [](char c) {
        char lower = tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    };

    auto shift_vowel = [](char c) {
        char lower = tolower(c);
        if (lower == 'a') return 'C';
        if (lower == 'e') return 'G';
        if (lower == 'i') return 'K';
        if (lower == 'o') return 'Q';
        if (lower == 'u') return 'W';
        return c;
    };

    for (char& c : message) {
        if (is_vowel(c)) {
            c = shift_vowel(c);
        } else {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    return message;
}