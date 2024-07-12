string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            int left = i + 1;
            while (left < word.length() && !("aeiouAEIOU".find(word[left]) != string::npos)) {
                ++left;
            }
            --left;
            if (left > 0) {
                return word.substr(left, i - left);
            }
        }
    }
    return "";
}