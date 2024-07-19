```cpp
#include <iostream>
#include <string>

const std::string compare_one(const std::string& a, const std::string& b) {
    if (a.size() > b.size())
        return "Longer";
    else if (a.size() < b.size())
        return "Shorter";
    return "Equal";
}

int main() {
    std::cout << "Enter the first string: ";
    std::string str1;
    std::cin >> str1;

    std::cout << "Enter the second string: ";
    std::string str2;
    std::cin >> str2;

    std::cout << "Enter the length for comparison: ";
    int length;
    std::cin >> length;

    std::cout << compare_one(str1, str2) << std::endl;

    return 0;
}