#include <algorithm>
#include <cctype>

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch (c - base) {
                case 0: case 1: case 2:
                    c += 3;
                    break;
                case 18: case 19: case 20:
                    c -= 22;
                    break;
                default:
                    c = base + ((c - base) % 26);
            }
        }
        result += c;
    }
    return result;
}