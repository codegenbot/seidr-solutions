#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            char temp = s[i];
            int j;
            for (j = i + 1; j < s.length() && s[j] <= temp; j++);
            string word = s.substr(i, j - i);
            for (char c : word) {
                result += c;
            }
            i = j - 1;
        }
    }
    return result;
}