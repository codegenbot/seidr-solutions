#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char newChar = (c == base) ? 
                (isupper(c) ? 'Z' : 'z') : 
                (base + ((c - base) % 26));
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}