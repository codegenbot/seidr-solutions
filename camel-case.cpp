Here is the modified code:

```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += (firstWord ? "" : "") + toupper(c + 1);
            firstWord = false;
        } else if (c == ' ') {
            output += (firstWord ? "" : "") + " ";
            firstWord = true;
        } else {
            output += c;
            firstWord = true;
        }
    }

    return output;
}

int main() {
    char c;
    std::string input = "";
    while ((c = cin.get()) != '\n') {
        if (c == '-') {
            input += toupper(c + 1);
        } else if (c != ' ') {
            input += c;
        }
    }
    std::cout << camelCase(input) << std::endl;

    return 0;
}