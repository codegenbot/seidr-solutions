string remove_vowels(string text) {
    string result;
    for (char c : text) {
        if (string("aeiouAEIOU").find(c) == string::npos) {
            result += c;
        }
    }
    return result;
}