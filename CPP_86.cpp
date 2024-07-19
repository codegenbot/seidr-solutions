```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    int i = 0;
    for (char c : s) {
        if (c == ' ') {
            while (i < s.length() && s[i] != ' ') {
                result += s[i];
                i++;
            }
            result += '.';
            i++;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << anti_shuffle(std::string("Hi. My name is Mister Robot. How are you?")) << std::endl;
    return 0;
}