string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        bool isVowel = false;
        for (char c : "aeiouAEIOU") {
            if (word[i] == c) {
                isVowel = true;
                break;
            }
        }
        if (isVowel) {
            int left = i + 1;
            while (left < word.length() && !isalpha(word[left])) ++left;
            if (left < word.length()) {
                for (++left; left < word.length(); ++left) {
                    if (!isalpha(word[left])) break;
                    isVowel = false;
                    for (char c : "aeiouAEIOU") {
                        if (word[left] == c) {
                            isVowel = true;
                            break;
                        }
                    }
                    if (isVowel) return word.substr(i, left - i);
                }
            }
        }
    }
    return "";
}