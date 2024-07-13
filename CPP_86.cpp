#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            char temp = s[i];
            while (i + 1 < s.length() && s[i + 1] <= temp) {
                i++;
            }
            for (; i >= 0 && s[i] <= temp; i--) {
                result += s[i];
            }
            i--;
        }
    }
    return result;
}