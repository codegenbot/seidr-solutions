string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (text.find_first_not_of("aeiouAEIOU") != string::npos) {
            result += c;
        }
    }
    return result;
}