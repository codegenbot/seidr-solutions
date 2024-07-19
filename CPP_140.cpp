#include <iostream>
#include <string>

std::string fix_spaces(const std::string& text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ')
                continue;
            else
                text.replace(i, 0, "%20");
            // i++ is not needed here because replace modifies the string in-place.
        }
    }
    return text;
}

int main() {
    std::cout << "Enter a string: ";
    std::string text;
    std::cin >> text;
    std::transform(text.begin(), text.end(), text.begin(),
                    [](unsigned char c) { return std::tolower(c); });
    std::cout << "Fixed string: " << fix_spaces(text) << std::endl;
    return 0;
}