#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base >= 'a' && base <= 'c') {
                base += 3;
            } else if (base >= 'd' && base <= 'f') {
                base += 2;
            } else if (base >= 'g' && base <= 'i') {
                base -= 1;
            } else if (base >= 'j' && base <= 'l') {
                base -= 2;
            } else if (base >= 'm' && base <= 'o') {
                base -= 3;
            } else if (base >= 'p' && base <= 's') {
                base += 1;
            } else if (base >= 't' && base <= 'v') {
                base += 2;
            } else if (base >= 'w' && base <= 'z') {
                base -= 4;
            }
            c = tolower(c) == base ? toupper(c) : tolower(c);
        }
        result += c;
    }
    return result;
}