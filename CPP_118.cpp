#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!std::ispunct(word[i]) && !std::isalpha(word[i])) break;
        if (vowels.find(std::toupper(word[i])) != std::string::npos)
            return word.substr(left, i - left + 1);
        left = i + 1;
    }
    return "";
}