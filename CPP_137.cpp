```cpp
#include <iostream>
#include <string>

const std::string compare_one(const std::string& a, const int b) {
    if (a.size() > b)
        return "Longer";
    else if (a.size() < b)
        return "Shorter";
    return "Equal";
}

int main() { 
    std::cout << "Enter the first string: ";
    std::string str1;
    std::cin >> str1;

    std::cout << "Enter the second integer: ";
    int num2;
    std::cin >> num2;

    std::cout << compare_one(str1, num2) << std::endl;

    return 0; 
}