```cpp
#include <iostream>
#include <string>

bool starts_one_ends(int n) {
    int count = 0;
    if (n <= 19) {
        for (int i = 1; i <= n; ++i) {
            std::string str = std::to_string(i);
            if (str.find("1") != std::string::npos || str.back() == '1')
                ++count;
        }
    } else {
        return false;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 19) {
        std::cout << "Input number should be less than or equal to 19." << std::endl;
        return 1; 
    }
    int result = starts_one_ends(n);
    std::cout << "The count of the numbers of " << std::to_string(n) << "-digit positive integers that start or end with 1 is: " << result << std::endl;
    return 0;
}