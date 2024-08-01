string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isspace(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            result += c;
        }
    }
    return result;
}