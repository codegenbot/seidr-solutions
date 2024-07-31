#include <string>
#include <algorithm>

using namespace std;

std::string anti_shuffle(std::string s);

std::string anti_shuffle(std::string s) {
    std::string result = "";
    int start = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            std::string word = s.substr(start, i - start);
            std::sort(word.begin(), word.end());
            result += word + " ";
            start = i + 1;
        }
    }
    return result;
}