```
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == ' ') {
            result += " ";
        } else {
            int j = 0;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > c) {
                    swap(s[j], c);
                }
                j++;
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