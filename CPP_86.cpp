#include <algorithm>
#include <assert.h>
using namespace std;

int anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                if (c >= 'a' && c <= 'z') {
                    c = ('A' + (c - 'a'));
                }
                result += to_string(c);
        }
    }
    return 0;
}