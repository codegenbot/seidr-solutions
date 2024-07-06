#include <algorithm>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int newIndex = ((int(c) - 97 + 2 * 2) % 26) + 97;
            result += (char)newIndex;
        } else if (c >= 'A' && c <= 'Z') {
            int newIndex = ((int(c) - 65 + 2 * 2) % 26) + 65;
            result += (char)newIndex;
        } else {
            result += c;
        }
    }
    return result;
}