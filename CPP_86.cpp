#include <algorithm>
#include <string>
#include <cassert>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            std::string word;
            int j = i;
            while (j < s.length() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            sort(word.begin(), word.end());
            result += word;
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}