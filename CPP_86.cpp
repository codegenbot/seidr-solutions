#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t start = 0;
    while (start < s.size()) {
        size_t end = start;
        while (end < s.size() && s[end] <= s[start]) {
            end++;
        }
        for (size_t i = start; i <= end; i++) {
            result += s[i];
        }
        result += ' ';
        start = end + 1;
    }
    return result.substr(0, result.size() - 1);
}