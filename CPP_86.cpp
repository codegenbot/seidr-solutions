#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                ++i;
            }
            for (int j = 0; j < word.length(); j++) {
                int k = 0;
                while (k < word.length()) {
                    if (word[k] > word[j]) break;
                    k++;
                }
                result += word[j];
            }
        }
    }
    return result;
}