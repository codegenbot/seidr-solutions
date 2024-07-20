#include <algorithm>
#include <cctype>

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
                i++;
            }
            for (int j = 0; j < word.length(); j++) {
                result += static_cast<char>(word[j]);
            }
        }
    }
    return result;
}