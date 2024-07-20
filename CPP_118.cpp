string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int max_right_index = -1;
    for (int i = 0; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        if (vowels.find(toupper(word[i])) != string::npos) {
            int j = i + 1;
            while (j < word.size() && !isalpha(word[j])) j++;
            if (j == word.size()) break;
            if (!isalpha(word[j])) {
                max_right_index = i;
                break;
            }
        }
    }
    return max_right_index != -1 ? string(1, vowels.find(toupper(word[max_right_index]))) : "";
}