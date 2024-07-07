#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            char c = s[i];
            while (c != ' ') {
                int j;
                for (j = 0; j <= i && s[j] != ' '; j++);
                string word = s.substr(j);
                sort(word.begin(), word.end());
                result += word;
                break;
            }
        }
    }
    return result;
}