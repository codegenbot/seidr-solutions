#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
            continue;
        }
        char temp = s[i];
        while (i + 1 < s.length() && s[i + 1] <= temp) {
            i++;
        }
        for (char c = temp; c <= s[i]; c++) {
            result += c;
        }
    }
    return result;
}