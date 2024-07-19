#include <iostream>
#include <string>
#include <algorithm>

class Main {
public:
    void run() {
        std::cout << "Enter first string: ";
        std::string str1;
        getline(std::cin, str1);

        if (str1.empty()) {
            std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
            return;
        }

        std::cout << "Enter second string: ";
        std::string str2;
        getline(std::cin, str2);

        if (str2.empty()) {
            std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
            return;
        }

        int result = compare_strings(str1, str2);

        if (result > 0)
            std::cout << "Greater string is: " << str1 << std::endl;
        else if (result < 0)
            std::cout << "Greater string is: " << str2 << std::endl;
        else
            std::cout << "Both strings are equal" << std::endl;
    }

    int compare_strings(const std::string& a, const std::string& b) {
        if (std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end()))
            return 1;
        else if (std::lexicographical_compare(b.begin(), b.end(), a.begin(), a.end()))
            return -1;
        else
            return 0;
    }
};

int main() {
    Main m;
    m.run();
    return 0;
}