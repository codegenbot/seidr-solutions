#include <algorithm>
#include <cctype>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char baseChar = tolower(c);
            if (baseChar >= 'a' && baseChar <= 'e') {
                baseChar += 3;
            } else if (baseChar >= 'i' && baseChar <= 'o') {
                baseChar += 2;
            } else if (baseChar == 'u') {
                baseChar = 'w';
            }
            result += isupper(c) ? toupper(baseChar) : tolower(baseChar);
        } else {
            result += c;
        }
    }
    return result;
}