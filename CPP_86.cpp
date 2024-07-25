#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            int start = i;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            string word = s.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word + " ";
        }
    }
    return result;
}