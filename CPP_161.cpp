#include <string>

using namespace std;

string solve(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            result += toupper(islower(s[i])) ? tolower(s[i]) : toupper(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}