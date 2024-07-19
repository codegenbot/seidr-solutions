Here is the completed code:

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.size() - 1; i > 0; --i) {
        if (vowels.find(word[i]) != std::string::npos) {
            int j;
            for (j = i - 1; j >= 0 && vowels.find(word[j]) == std::string::npos; --j) {
                if (vowels.find(word[j]) != std::string::npos) {
                    break;
                }
            }
            return word.substr(j + 1, i - j - 1);
        }
    }
    return "";
}