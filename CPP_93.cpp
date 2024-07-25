#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base >= 'a' && base <= 'e') {
                base += 2;
                if (base > 'e')
                    base -= 26;
            } else if (base >= 'i' && base <= 'o') {
                base += 2;
                if (base > 'o')
                    base -= 26;
            } else if (base >= 'u' && base <= 'u') {
                base += 2;
                if (base > 'u')
                    base -= 26;
            }
            c = isupper(c) ? toupper(base) : tolower(base);
        }
        result += c;
    }
    return result;
}