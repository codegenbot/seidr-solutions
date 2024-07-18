#include <algorithm>
#include <string>

string anti_shuffle(string s) {
    string result = "";
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ". Hi My aemn is Meirst . Rboot How aer ? ouy");
    
    return 0;
}