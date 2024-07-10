#include <algorithm>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
        } else {
            char temp = tolower(c);
            if (result.empty() || !isupper(temp)) {
                result += toupper(temp);
            } else {
                result += tolower(temp);
            }
        }
    }
    reverse(result.begin(), result.end());
    return result;
}