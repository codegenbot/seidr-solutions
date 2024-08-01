#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == ' ') {
            result += s.substr(i, s.find(' ', i+1) - i) + " ";
            i = s.find(' ', i+1);
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += min_element(word.begin(), word.end()) -> first;
            }
            result += " ";
        }
    }
    return result.substr(0, result.find_last_of(' ')) + result.substr(result.find_last_of(' ') + 1);
}