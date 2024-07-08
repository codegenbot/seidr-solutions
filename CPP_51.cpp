string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}