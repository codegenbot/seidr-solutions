```cpp
#include <iostream>
#include <string>
#include <cassert>

std::string anti_shuffle(const std::string& s) {
    std::string result = ""; 
    for (char c : s) {
        if (c == ' ') {
            result += '.';
        } else {
            int i = 0;
            while (s[i] != ' ' && i < s.length()) {
                result += s[i];
                i++;
            }
            result += c;
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == "Hi. My name is Mister Robot. How are you?");
    return 0;
}