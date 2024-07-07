string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) continue;
        while (left < right && !isconsonant(word[left])) ++left;
        return isvowel(word[right]) ? string(1, word[right]) : "";
    }
    return "";
}

bool isvowel(char c) { return "aeiouAEIOU".find(c) != string::npos; }

bool isconsonant(char c) { return !isvowel(c); }