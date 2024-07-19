```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c == ' ') {
            result += '.';
        } else {
            result += char(c);
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}