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
                if(c >= 'a' && c <= 'z') {
                    result += ('a' + (c - 'a') % 26);
                } else if(c >= 'A' && c <= 'Z') {
                    result += ('A' + (c - 'A') % 26);
                } else {
                    result += c;
                }
            }
        }
    }
    return 0;
}