#include<string>
#include<cctype>

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
            } else if (base >= 'g' && base <= 'j') {
                base -= 1;
            } else if (base >= 'k' && base <= 'n') {
                base -= 2;
            } else if (base >= 'o' && base <= 's') {
                base += 1;
            } else if (base >= 't' && base <= 'v') {
                base -= 3;
            } else if (base >= 'w' && base <= 'z') {
                base -= 4;
            }
            result += base < 'a'? toupper(base - 26) : tolower(base);
        } else {
            result += c;
        }
    }
    return result;
}