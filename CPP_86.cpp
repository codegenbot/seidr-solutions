#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            char temp = s[i];
            while (temp != ' ') {
                char c = temp;
                bool changed = false;
                for (char j = 'a'; j <= 'z'; j++) {
                    if (j < c) {
                        c = j;
                        changed = true;
                    }
                }
                for (char j = 'A'; j <= 'Z'; j++) {
                    if (j < c) {
                        c = j;
                        changed = true;
                    }
                }
                temp = c;
            }
            result += temp;
        }
    }
    return result;
}