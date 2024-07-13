string get_closest_vowel(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right) {
        if (!isvowel(word[right])) {
            right--;
        } else if (!isvowel(word[left])) {
            left++;
        } else {
            return islower(word[right]) ? "u" : "U";
        }
    }
    for (int i = 0; i < word.length(); i++) {
        if (!isvowel(word[i])) continue;
        int j = i - 1, k = i + 1;
        while (j >= 0 && !isconsonant(word[j])) j--;
        while (k < word.length() && !isconsonant(word[k])) k++;
        if (j >= 0 && k < word.length()) return islower(word[i]) ? word.substr(j, k - j) : toupper(word.substr(j, k - j));
    }
    return "";
}

bool isvowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool isconsonant(char c) {
    return !isvowel(c);
}