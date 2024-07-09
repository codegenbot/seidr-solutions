#include <algorithm>
using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            result += (c == toupper(c)) ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }

    if (!hasLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}