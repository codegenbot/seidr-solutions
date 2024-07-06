#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newC = c;
            if (islower(newC)) {
                newC = 'a' + (newC - 'a' + 2) % 26;
            } else {
                newC = 'A' + (newC - 'A' + 2) % 26;
            }
            result += toppercase(newC);
        } else {
            result += c;
        }
    }
    return result;
}