#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U') {
            int left = i - 1;
            while (left >= 0 && !isVowel(word[left])) --left;
            if (left < i - 1) {
                result = word.substr(left + 1, i - left - 1);
                break;
            }
        }
    }
    return result;
}

bool isVowel(char c) {
    using namespace std;
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}