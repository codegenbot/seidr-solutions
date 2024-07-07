string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if ((c | 0x20) != 'a' && (c | 0x20) != 'e' && (c | 0x20) != 'i' && (c | 0x20) != 'o' && (c | 0x20) != 'u') {
            result += c;
        }
    }
    return result;
}