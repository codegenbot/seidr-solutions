int i = 0; for (char c : str)
result += toupper(c));
```c++
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    int i = 0;

    for (int i = 0; char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += toupper(c);
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += tolower(c);
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
            } else {
                result += tolower(c);
            }
        }
        i++;
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