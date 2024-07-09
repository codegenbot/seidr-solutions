#include <string>

string toLower(string text) {
    string result = "";
    for (char c : text) {
        if (c >= 'A' && c <= 'Z') {
            result += (char)(c - ('Z' - 'a'));
        } else {
            result += c;
        }
    }
    return result;
}

bool is_palindrome(string text) {
    string lowered = toLower(text);
    for (int i = 0; i < lowered.length() / 2; i++) {
        if (lowered[i] != lowered[lowered.length() - i - 1]) {
            return false;
        }
    }
    return true;
}