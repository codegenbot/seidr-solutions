#include <string>

using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) { // Check if character is a letter
            hasLetter = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c; // If not a letter, keep it as it is
        }
    }

    if (!hasLetter) { // If string contains no letters, reverse the string
        reverse(result.begin(), result.end());
    }

    return result;
}