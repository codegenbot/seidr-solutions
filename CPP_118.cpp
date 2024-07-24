#include <iostream>
#include <cctype>
#include <string>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    int i = 0;
    while (i < word.size()) {
        if (!isalpha(word[i])) i++;
        else if (strchr("aeiouAEIOU", tolower(word[i])) != NULL) {
            int j = i - 1;
            while (j >= 0 && !isalpha(word[j])) j--;
            if (j >= 0) {
                result = word.substr(j + 1, i - j - 1);
                return result;
            }
        }
        i++;
    }
    return result;
}

int main() {
    std::string word;
    std::cout << "Enter a string: ";
    std::getline(std::cin, word);
    std::cout << get_closest_vowel(word) << std::endl;
    return 0;
}