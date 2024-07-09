string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isspace(c) && (c != 'a' || c != 'A') &&
            (c != 'e' || c != 'E') && (c != 'i' || c != 'I') &&
            (c != 'o' || c != 'O') && (c != 'u' || c != 'U')) {
            result += c;
        }
    }
    return result;
}