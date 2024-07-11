#include <string>

string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!strncasecmp(&c, "aeiouAEIOU", 6)) {
            continue;
        }
        result += c;
    }
    return result;
}