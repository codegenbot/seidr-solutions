bool is_vowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
               c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }

    string get_closest_vowel(string word) {
        int n = word.size();
        for (int i = n - 2; i > 0; --i) {
            if (!is_vowel(word[i]) && !is_vowel(word[i+1]) && is_vowel(word[i-1])) {
                return string(1, word[i]);
            }
        }
        return "";
    }