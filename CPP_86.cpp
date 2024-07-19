#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    bool spaceFound = false;
    for (char c : s) {
        if (c == ' ') {
            spaceFound = true;
            result += '.';
        } else {
            if (!spaceFound) {
                while (s.find(' ') != std::string::npos) {
                    s.erase(0, 1);
                }
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