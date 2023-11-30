#include <string>
using namespace std;

string solve(string s) {
    string result = "";

    // Reverse the case of letters
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else {
            result += s[i];
        }
    }

    // Reverse the string if it contains no letters
    if (result.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(result.begin(), result.end());
    }

    return result;
}