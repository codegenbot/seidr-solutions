#include <algorithm>
#include <string>
#include <cassert>

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
assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".HiMnaiserRtobeMyou?areyou");