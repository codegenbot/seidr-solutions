````
#include <string>
#include <iostream>

std::string fix_spaces(const std::string& text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ')
                continue;
            if (i < text.length() - 1 && text[i + 1] == ' ')
                continue;
            text.insert(i, "_");
            i++;
        }
    }
    return text;
}

int main() {
    std::cout << "Enter a string: ";
    std::string text;
    std::cin >> text;
    std::cout << "Fixed string: " << fix_spaces(text) << std::endl;
    return 0;
}
```