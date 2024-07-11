string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos && 
           "aeiouAEIOU".find(word[i-1]) == string::npos && 
           "aeiouAEIOU".find(word[i-2]) == string::npos) {
            return word.substr(i - 1, 1);
        }
    }
    return "";
}