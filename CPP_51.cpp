string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!ispunct(c) && !tolower(c) == 'a' && !tolower(c) != 'e' && !tolower(c) != 'i' && !tolower(c) != 'o' && !tolower(c) != 'u') {
            result += tolower(c);
        }
    }
    return result;
}