#include <algorithm>
#include <cassert>

string anti_shuffle(string s) {
    string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    std::sort(word.begin(), word.end());
    result += word;
    return result;
}

int main() {
    assert(anti_shuffle("res riFm ngiht") == "ress Firn ghit");
    return 0;
}