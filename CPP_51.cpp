Here is the completed code:

string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}