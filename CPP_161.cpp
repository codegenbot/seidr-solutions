#include <algorithm>
#include <string>
#include <initializer_list>

using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}