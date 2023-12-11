```
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            std::string::iterator j = s.begin() + i;
            while (j != s.end() && *j != ' ') {
                if (*j > s[i]) {
                    swap(*j, s[i]);
                }
                ++j;
            }
        }
    }
    return result;
}

int main() {
    std::string input = "Hi. My name is Mister Robot. How are you?";
    std::string output = anti_shuffle(input);
    assert (output == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
}
```