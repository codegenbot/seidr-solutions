#include <string>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        }
        switch (c) {
            case 'a':
                result += 'c';
                break;
            case 'e':
                result += 'g';
                break;
            case 'i':
                result += 'k';
                break;
            case 'o':
                result += 'q';
                break;
            case 'u':
                result += 'w';
                break;
        }
    }
    return result;
}