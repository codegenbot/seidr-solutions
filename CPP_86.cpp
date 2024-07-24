#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t start = 0;
    
    for (size_t i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            string word = s.substr(start, i - start);
            for (char c : word) {
                result += char(c);
            }
            result += ' ';
            start = i + 1;
        }
    }
    
    return result;
}