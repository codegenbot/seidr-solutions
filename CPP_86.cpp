```cpp
#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t nextSpace = s.find(' ', pos);
        if (nextSpace == string::npos) {
            nextSpace = s.length();
        }
        std::string word = s.substr(pos, nextSpace - pos);
        result += "";
        for (char c : word) {
            result += c;
        }
        pos = nextSpace + 1;
    }
    return result;
}