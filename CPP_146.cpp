```cpp
#include <iostream>

int specialFilter(int num) {
    if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n, count = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        count += specialFilter(std::stoi(std::to_string(num)));
    }
    std::cout << "Number of elements that meet the condition: " << count;
    return 0;
}