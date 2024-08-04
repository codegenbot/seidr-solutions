```c++
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    bool prevWasDashOrSpace = false;

    for (char c : str) {
        if (c == '-') {
            prevWasDashOrSpace = true;
        } else if (c == ' ') {
            if (!prevWasDashOrSpace && !firstWord) {
                result += char(toupper(c));
            }
            firstWord = false;
            prevWasDashOrSpace = false;
        } else {
            if (!firstWord) {
                result += c;
            } else if (prevWasDashOrSpace || c == ' ') {
                result += tolower(c);
            } else {
                result += toupper(c);
            }
            firstWord = false;
            prevWasDashOrSpace = false;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}