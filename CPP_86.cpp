#include <string>
#include <algorithm>

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

int main() {
    // Sample test cases using assert
    assert(anti_shuffle("fedcba") == "abcdef");
    assert(anti_shuffle("bya i ekscwiaosjo") == "a abceiijkoosswy");

    return 0;
}