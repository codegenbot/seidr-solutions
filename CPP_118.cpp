string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isalpha(word[right])) continue;
        if (isvowel(tolower(word[right]))) {
            while (left < right && !isalpha(word[left])) ++left;
            return tolower(word.substr(left, right - left + 1)) == "u" ? "U" : "u";
        }
    }
    return "";
}