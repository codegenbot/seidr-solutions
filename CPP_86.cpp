#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            for (char c : s.substr(i)) {
                result += to_string(c);
            }
            result += ' ';
        } else {
            char c = s[i];
            while (i < s.length() && s[i] <= c) i++;
            result += string(1, c);
        }
    }
    return result;
}

int main() {
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") ==
".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}