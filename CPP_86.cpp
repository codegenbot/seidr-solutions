#include <algorithm>
#include <string>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        std::string word = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            word += s[j];
        }
        for (char c : word) {
            result += *min_element(word.begin(), word.end());
        }
        i += word.length() - 1;
    }
    return result;
}