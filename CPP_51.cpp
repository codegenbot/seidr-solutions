string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isspace(c) && toupper(c) != 'A' && toupper(c) != 'E' && toupper(c) != 'I' && toupper(c) != 'O' && toupper(c) != 'U') {
            result += c;
        }
    }
    return result;
}