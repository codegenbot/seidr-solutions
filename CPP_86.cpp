#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(i - s.find_last_of(" ") + 1, i - s.find_last_of(" ") - 1);
            result += string(word.begin(), word.end(), '\0');
            result += " ";
        }
    }
    return result;
}