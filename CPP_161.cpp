#include <algorithm>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c - ('A' - 'a');
        } else {
            result += c;
        }
    }
    reverse(result.begin(), result.end());
    return s.empty() ? result : result + c;
}