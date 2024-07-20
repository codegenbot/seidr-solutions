#include <algorithm>
#include <cctype>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newC;
            if (islower(c))
                newC = 'a' + (c - 'a' + 2) % 26;
            else
                newC = 'A' + (c - 'A' + 2) % 26;
            result += newC;
        } else {
            result += c;
        }
    }
    for (char &c : result) {
        if (isalpha(c)) {
            c = toupper(c);
        }
    }
    return result;
}