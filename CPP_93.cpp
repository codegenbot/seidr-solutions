#include <string>
#include <algorithm>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base >= 'a' && base <= 'c') {
                base += 2;
            } else if (base >= 'e' && base <= 'i') {
                base += 4;
            } else if (base >= 'o' && base <= 'u') {
                base += 6;
            }
            result += isupper(c) ? toupper(base) : tolower(base);
        } else {
            result += c;
        }
    }
    return result;
}