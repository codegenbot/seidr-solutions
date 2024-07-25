#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'A' && c <= 'Z') {
                c = tolower(c);
            }
        } else {
            c = tolower(c);
        }
        result += c;
    }
    reverse(result.begin(), result.end());
    return result;