string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isupper(c) && !islower(c))
            continue;
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            !ispunct(c) && !isspace(c)) {
            result += c;
        }
    }
    return result;
}