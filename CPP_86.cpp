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
            while (i < s.size() && s[i] != ' ') {
                word += s[i++];
            }
            for (char c : word) {
                result += c;
            }
            i--; // Backtrack the index
        }
    }
    return result;
}