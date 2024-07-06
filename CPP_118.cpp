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
            return word.substr(left + 1, right - left - 1);
        }
    }
    if (isvowel(word[0])) {
        return word;
    } 
    return (word.size() == 0 || isvowel(word[word.size()-1])) ? "" : word.substr(0, word.find_last_of(isvowel));
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}