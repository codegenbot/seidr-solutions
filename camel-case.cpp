```
#include <iostream>
#include <string>
#include <vector>

std::string camelCase(const std::string& input) {
    std::string result;
    std::string temp;
    int n = input.length();

    for (int i = 0; i < n; i++) {
        if (input[i] == '-') {
            result += temp;
            temp = "";
            continue;
        }
        if (input[i] == ' ') {
            result += " ";
            continue;
        }
        if (temp.empty()) {
            temp += toupper(input[i]);
        } else {
            temp += input[i];
        }
    }

    result += temp;
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;

    return 0;
}
```