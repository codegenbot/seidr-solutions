Here is the completed code:

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            if (!isalnum(word[i - 1])) {
                return word.substr(i, 1);
            }
            break;
        }
    }
    return "";
}