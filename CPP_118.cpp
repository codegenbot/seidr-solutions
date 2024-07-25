#include <algorithm>

string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!ispunct(word[i]) && !isupper(word[i])) { // Check if the character is a vowel
            left = i + 1;
            break;
        }
    }

    int right = word.size();
    for (int i = 0; i < word.size(); i++) {
        if (!ispunct(word[i]) && !isupper(word[i])) { // Check if the character is a vowel
            right = i;
            break;
        }
    }

    for (int i = left; i < right; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            return string(1, word[i]);
        }
    }

    return "";
}