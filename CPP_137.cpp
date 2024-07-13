#include <iostream>
#include <string>

int compare_one(const std::string& s) {
    int val = std::stoi(s);
    if (val == 10)
        return -1;
    else if (val > 10)
        return 1;
    else 
        return 0;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    int s1 = compare_one(a);
    int s2 = compare_one(b);

    if (s1 < s2) {
        return -1;
    } else if (s2 < s1) {
        return 1;
    } else {
        return 0;
    }
}