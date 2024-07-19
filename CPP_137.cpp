#include <iostream>
#include <string>
#include <algorithm>

class Main {
public:
    void run() {
        std::string str1;
        std::cout << "Enter first string: ";
        std::getline(std::cin, str1);

        std::string str2;
        std::cout << "Enter second string: ";
        std::getline(std::cin, str2);

        int result = compare_strings(str1, str2);

        if (result > 0)
            std::cout << "Greater string is: " << str1 << std::endl;
        else if (result < 0)
            std::cout << "Greater string is: " << str2 << std::endl;
        else
            std::cout << "Both strings are equal" << std::endl;
    }

    int compare_strings(const std::string& a, const std::string& b) {
        if (a > b)
            return 1;
        else if (b > a)
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