```cpp
std::string get_closest_vowel(std::string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) {
            return std::string(1, tolower(word[i]));
        }
    }
    return "";
}