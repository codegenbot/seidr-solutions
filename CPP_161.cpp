#include <algorithm>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'z' || c == 'Z') {
                c = isupper(c) ? 'a' : 'Z';
            } else {
                c = toupper(c);
            }
        }
        result += c;
    }
    reverse(result.begin(), result.end());
    return result;
}