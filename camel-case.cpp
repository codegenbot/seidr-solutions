Here is the modified code:

```cpp
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        start = end + 1;
    }

    std::string result = "";
    if (!str.empty()) {
        result += char(std::toupper(str[0]));
        result += str.substr(1);
    } else {
        return str;
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}