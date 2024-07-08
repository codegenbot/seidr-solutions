#include <string>
#include <algorithm>

string remove_vowels(string text) {
    string result;
    for (char c : text) {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
              || toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I'
              || toupper(c) == 'O' || toupper(c) == 'U')) {
            result += c;
        }
    }
    return result;
}