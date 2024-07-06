#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) {
            ++left;
        } else if (!isvowel(word[right])) {
            --right;
        } else {
            return word.substr(left, min(right - left + 1, string::npos));
        }
    }
    return (isvowel(word[0])) ? word : (isvowel(word[word.size() - 1])) ? word.substr(word.size() - 1) : "";
}

#include <algorithm>
using namespace std;

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}