#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; right--) {
        if (!isalpha(word[right])) {
            break;
        }
        left = right;
    }

    for (int i = left; i < word.size(); i++) {
        if (vowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }

    return "";
}

bool vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}