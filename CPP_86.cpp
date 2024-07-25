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

string anti_shuffle(string s);

int main() {
    assert(anti_shuffle("hello world") == "ehllo dlorw");
    assert(anti_shuffle("cpp contest") == "cpp cnotst");
    assert(anti_shuffle("algorithm problem") == "aaghiilmnopr belmoprr");
    return 0;
}