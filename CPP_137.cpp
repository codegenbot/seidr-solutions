```cpp
#include <iostream>
#include <string>

const int compare_one(const std::string& a, const int b) {
    if (a == "1")
        return b;
    else if (a == "-1")
        return -b;
    else
        return 0;
}

int main() {
    std::cout << "Enter the first string: ";
    std::string str1;
    std::cin >> str1;

    std::cout << "Enter the second integer: ";
    int b;
    std::cin >> b;

    int result = compare_one(str1, b);
    if (result > 0)
        std::cout << "The first string is greater." << std::endl;
    else if (result < 0)
        std::cout << "The second integer is greater." << std::endl;
    else
        std::cout << "Both are equal." << std::endl;

    return 0;
}

int compare_strings(const std::string& a, const int b) {
    for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
        if (std::tolower(a[i]) > std::tolower(b[i]))
            return 1;
        else if (std::tolower(a[i]) < std::tolower(b[i]))
            return -1;
    }
    if (a.size() > b)
        return 1;
    else if (a.size() < b)
        return -1;
    return 0;
}