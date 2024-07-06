#include <cctype>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base >= 'a' && base <= 'd') {
                base = ('z' - 2) + 1;
            } else if (base > 'd' && base <= 'g') {
                base = ('y' - 2) + 1;
            } else {
                base = (base - 2);
            }
            result += (isupper(c) ? toupper(base) : tolower(base));
        } else {
            result += c;
        }
    }
    return result;
}