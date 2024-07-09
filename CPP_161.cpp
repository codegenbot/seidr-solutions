#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    if (result.length() % 2 != 0) {
        reverse(result.begin(), result.end());
    }
    return result;
}