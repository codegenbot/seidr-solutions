#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        char temp = s[i];
        for (char c : s.substr(i + 1)) {
            if (c <= temp) {
                temp = c;
            }
        }
        for (int j = 0; j < temp - 'a' + 1; j++) {
            result += temp - j;
        }
        i += temp - 'a' + 1;
    }
    return result;
}