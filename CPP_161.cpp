#include <algorithm>

string solve(string s) {
    string result = "";
    bool hasLetters = false;

    for (char c : s) {
        if (isalpha(c)) {
            hasLetters = true;
            c = toupper(islower(c)) ? tolower(c) : toupper(c);
        }
        result += c;
    }

    return hasLetters ? result : string(result.rbegin(), result.rend());
}