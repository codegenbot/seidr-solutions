#include <string>

using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetters = false;

    for (char c : s) {
        if (isalpha(c)) {
            hasLetters = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }

    return hasLetters ? result : string(result.rbegin(), result.rend());
}