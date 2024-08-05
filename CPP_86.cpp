#include <algorithm>
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
    
    if (!word.empty()) {
        sort(word.begin(), word.end());
        result += word;
    }
    
    return result;
}

int main() {
    assert(anti_shuffle("edaprmit ncdeeos") == "compare andsort");
    return 0;
}