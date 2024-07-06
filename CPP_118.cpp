#include<string>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int right = 0;
    while (right < word.size()) {
        if (!ispunct(word[right]) && !isalpha(word[right])) break;
        if (vowels.find(toupper(word[right])) != std::string::npos) {
            for (int left = right; left >= 0; --left) {
                if (!ispunct(word[left]) && !isalpha(word[left]))
                    return "";
                if (vowels.find(toupper(word[left])) != std::string::npos) {
                    int distance = right - left;
                    if (distance > 1)
                        return word.substr(left, distance);
                }
            }
        }
        ++right;
    }
    return "";
}