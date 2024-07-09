#include <iostream>
#include <cctype>
#include <string>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i]))
            return "";
        std::transform(word.begin(), word.end(), word.begin(),
                       [](unsigned char c){return tolower(c);});
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u')
            return std::to_string(word[i]);
    }
    return "";
}

int main() {
    std::cout << get_closest_vowel("Hello World") << std::endl;
    return 0;
}