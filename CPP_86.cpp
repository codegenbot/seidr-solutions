#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t start = pos;
        while (pos < s.length() && s[pos] != ' ') {
            pos++;
        }
        string word = s.substr(start, pos - start);
        sort(word.begin(), word.end());
        result += word + " ";
        pos++;
    }
    return result;
}