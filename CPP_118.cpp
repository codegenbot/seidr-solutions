string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int right_index = word.length() - 1;
    while (right_index > 0) {
        if (vowels.find(word[right_index]) != std::string::npos) {
            for (int i = right_index; i > 0; i--) {
                if (std::all_of(word.begin(), word.end(), [&](char c){ return vowels.find(c) == string::npos;})) {
                    return (word[i-1]);
                }
            }
        }
        right_index--;
    }
    return "";
}