#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a sentence: ";
    std::string str;
    std::cin >> str;

    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(" ", pos)) != std::string::npos) {
        ++count;
        pos = str.find(" ", pos);
    }
    return 0;
}