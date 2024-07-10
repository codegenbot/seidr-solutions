#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch (c - base) {
                case 0:
                case 1:
                    result += c;
                    break;
                default:
                    int pos = (c - base) % 26;
                    if (pos < 3) {
                        pos += 26;
                    }
                    char newChar = isupper(c) ? toupper(base + pos) : tolower(base + pos);
                    result += newChar;
            }
        } else {
            result += c;
        }
    }
    return result;
}