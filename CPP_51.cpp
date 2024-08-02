string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else {
            char lower = tolower(c);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                result += c;
            }
        }
    }
    return result;
}