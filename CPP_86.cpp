#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += min_element(word.begin(), word.end())->first;
            }
            i--;
        }
    }
    return result;
}