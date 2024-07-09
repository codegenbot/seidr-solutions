std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
            int left = i - 1;
            while (left >= 0 && !((word[left] >= 'a' && word[left] <= 'z') || (word[left] >= 'A' && word[left] <= 'Z'))) --left;
            if (left < i - 1) {
                result = word.substr(left + 1, i - left - 1);
                break;
            }
        }
    }
    return result;
}