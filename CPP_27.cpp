```
#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(const std::string& str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result += tolower(str[i]);
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            result += toupper(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input_string = "These violent delights have violent ends";
    std::cout << flip_case(input_string) << std::endl;
    return 0;
}
```