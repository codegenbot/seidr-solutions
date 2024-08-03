```cpp
#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) {
            int left = i + 1;
            while (left < word.length() && !isalpha(word[left])) left++;
            for (; left < word.length(); left++) {
                if (isvowel(word[left])) {
                    result = word.substr(left, 1);
                    return result;
                }
            }
        }
    }
    return result;
}