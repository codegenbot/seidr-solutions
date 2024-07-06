```cpp
string get_closest_vowel(string word) {
    int n = word.length();
    string closestVowel = "";
    for (int i = 0; i < n; ++i) {
        if (isvowel(word[i])) {
            if (closestVowel.empty()) {
                closestVowel = string(1, tolower(word[i]));
            } else if (i - closestVowel.length() > 0) {
                closestVowel = "";
            }
            break;
        }
    }
    return closestVowel;
}