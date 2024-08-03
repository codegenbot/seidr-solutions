string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                   (c >= 'A' && c <= 'Z')) {
            result += c;
        }
    }
    return result;
}