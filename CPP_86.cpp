#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

std::string anti_shuffle(std::string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += (int)c;
            }
            i--;
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}