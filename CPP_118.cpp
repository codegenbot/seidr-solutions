string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u') {
            int left = i;
            while (left > 0 && !isVowel(word[left - 1])) --left;
            if (word.length() - 1 - i < i - left) result = "";
            else if (i - left > 0) result = word.substr(left, i - left);
            return result;
        }
    }
    return result;
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}