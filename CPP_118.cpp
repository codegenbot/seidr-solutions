string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = -1;
    for (int i = word.length() - 1; i >= 0; i--) {
        if (vowels.find(word[i]) != -1 && left == -1) {
            left = i;
        }
        else if (vowels.find(word[i]) == -1 && left != -1) {
            break;
        }
    }
    return left != -1 ? &word[left] : "";
}