#include <iostream>
#include <string>

int starts_one_ends(int n) {
    std::string str = std::to_string(n);
    if (str.find("1") != std::string::npos || str.back() == '1')
        return 1;
    else
        return 0;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 19) {
        std::cout << "Input number should be less than or equal to 19." << std::endl;
        return 1; 
    }
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        count += starts_one_ends(i);
    }
    std::cout << "The count of the numbers that start or end with 1 is: " << count << std::endl;
    return 0;
}