#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) ++left;
        else if (!isvowel(word[right])) --right;
        else return word.substr(left + 1, right - left);
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}