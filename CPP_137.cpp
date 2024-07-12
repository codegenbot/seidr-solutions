#include <iostream>
#include <string>
#include <boost/any.hpp>

int compare_one(const std::string& s, int i) {
    if (i == 1)
        return std::stoi(s) - 10;
    else if (i == 2)
        return std::stoi(s);
    else if (i == 3)
        return std::stoi(s) + 10;
    else 
        return 0;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    int s1 = compare_one(a, 1);
    int s2 = compare_one(b, 2);

    if (s1 < s2) {
        return -1;
    } else if (s2 < s1) {
        return 1;
    } else {
        return 0;
    }
}