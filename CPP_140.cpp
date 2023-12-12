```cpp
#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            int count = 1;
            while (i + count < text.length() && text[i + count] == ' ') {
                count++;
            }
            if (count > 2) {
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += text[i];
        }
    }
    return result;
}
```