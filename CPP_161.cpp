#include <string>

using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'a' && c <= 'z') {
                c = tolower(c);
            }
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(s.begin(), s.end());
    }
    return result;
}