#include <iostream>
#include <string>

int main() {
    std::string text, target;
    std::cout << "Enter two strings: ";
    std::cin >> text >> target;

    int indices = 0;
    size_t pos = 0;

    while ((pos = text.find(target)) != std::string::npos) {
        indices++;
        text = text.substr(pos + target.length());
        pos = text.find(target);
    }

    std::cout << "Indices at which the target appears in the text: " << indices << std::endl;
    return 0;
}