#include <algorithm>
#include <string>
#include <cassert>

namespace Contest {
    using namespace std;

    string anti_shuffle(string s) {
        string result = "";
        string word = "";
        for (char c : s) {
            if (c == ' ') {
                sort(word.begin(), word.end());
                result += word + ' ';
                word = "";
            } else {
                word += c;
            }
        }
        sort(word.begin(), word.end());
        result += word;
        return result;
    }
}