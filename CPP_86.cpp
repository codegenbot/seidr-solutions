#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
            continue;
        }
        char c = s[i];
        while (i + 1 < s.length() && s[i + 1] <= c) {
            i++;
        }
        for (; i >= 0 && s[i] <= c; i--) {
            result += s[i];
        }
    }
    return result;
}