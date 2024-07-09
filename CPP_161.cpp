#include <string>

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            if (islower(c))
                result += toupper(c);
            else
                result += tolower(c);
        } else
            result += c;
    }
    return result;