#include <cctype>
string remove_vowels(string text) {
    string result;
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!isvowel(c)) {
            result += tolower(c);
        }
    }
    return result;
}