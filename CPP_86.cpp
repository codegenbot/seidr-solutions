```
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (char i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    swap(s[i], s[j]);
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