string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right > left; --right) {
        if (!isvowel(word[right])) continue;
        int j = right - 1;
        while (j >= left && !isconsonant(word[j])) --j;
        if (j < left) return "";
        return string(1, tolower(word[j + 1]));
    }
    return "";
}

bool isvowel(char c) {
    return "aeiouAEIOU".find(c) != string::npos;
}

bool isconsonant(char c) {
    return !isvowel(c);
}