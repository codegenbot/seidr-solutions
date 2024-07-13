string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.size() - 1; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            int left = i;
            while (left > 0 && vowels.find(word[left-1]) == string::npos) {
                --left;
            }
            return word.substr(left, i - left);
        }
    }
    return "";
}