#include <algorithm>
#include <cctype>
using namespace std;

string encode(string message) {
    string result;
    for (char c : message) {
        if (isalpha(c)) {
            char newChar = c;
            if (islower(c)) {
                newChar = 'a' + (c - 'a' + 2) % 26;
            } else {
                newChar = 'A' + (c - 'A' + 2) % 26;
            }
            result += toupper(islower(newChar)) ? tolower(newChar) : toupper(newChar);
        } else {
            result += c;
        }
    }
    return result;
}