string remove_vowels(string text) {
    string result;
    for (char c : text) {
        if (!ispunct(c) && !isalnum(c) || (c >= 'a' && c <= 'z') && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') ||
            (c >= 'A' && c <= 'Z') && (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')) {
            result += c;
        }
    }
    return result;
}