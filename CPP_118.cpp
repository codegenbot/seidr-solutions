#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    while (left < word.size() && !isvowel(word[left])) {
        left++;
    }
    if (left == word.size()) {
        return "";
    }

    for (int right = word.size() - 1; right >= 0 && !isvowel(word[right]); --right) {
        if (!isvowel(word[right])) {
            continue;
        }
        int distance = right - left;
        for (int i = right - 1; i > left; --i) {
            if (!isvowel(word[i]) || isvowel(word[i-1])) {
                return to_string(word[i]);
            }
        }
    }

    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}