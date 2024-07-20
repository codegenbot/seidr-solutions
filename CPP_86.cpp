#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word;
            int j = i;
            while (j < s.size() && s[j] != ' ') {
                word += s[j++];
            }
            for (char c : word) {
                result += (c <= 'z' && c >= 'a') ? ((int)c + 1) > 122 ? 'a' : (char)(c + 1) : (char)c;
            }
            i = j - 1;
        }
    }
    return result;
}