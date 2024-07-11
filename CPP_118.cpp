string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0 && !isVowel(word[right]); right--) {
        if (!isConsonant(word[right])) return "";
        left = right + 1;
    }
    for (; left < word.size(); left++) {
        if (isVowel(word[left])) return string(1, tolower(word[left]));
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isConsonant(char c) {
    return (!isVowel(c));
}