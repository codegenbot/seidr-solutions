string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            int left = i;
            while (left > 0 && !("aeiouAEIOU").count(word[left-1])) --left;
            return word.substr(left - 1, 1);
        }
    }
    return "";
}