#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char baseChar = tolower(c);
            if (baseChar >= 'a' && baseChar <= 'c') {
                baseChar += 2;
            } else if (baseChar >= 'e' && baseChar <= 'g') {
                baseChar += 2;
            } else if (baseChar >= 'i' && baseChar <= 'k') {
                baseChar += 2;
            } else if (baseChar >= 'm' && baseChar <= 'o') {
                baseChar += 2;
            } else if (baseChar >= 'q' && baseChar <= 's') {
                baseChar += 2;
            } else if (baseChar >= 'u' && baseChar <= 'w') {
                baseChar += 2;
            } else if (baseChar >= 'x' && baseChar <= 'z') {
                baseChar = 'a' + (baseChar - 'x');
            }
            c = (isupper(c)) ? toupper(baseChar) : tolower(baseChar);
        }
        result += c;
    }
    return result;
}