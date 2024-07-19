#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == ' ') {
            while (i + 1 < s.length() && s[i + 1] != ' ') {
                result += s[i + 1];
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