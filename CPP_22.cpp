```cpp
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

int main() {
    std::vector<int> numbers;
    int n;

    // Read the number of integers to be processed
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }

    // Filter integers
    for (auto &num : numbers) {
        if (!issame(num, 0)) {
            std::cout << num << " is not zero.\n";
        }
    }

    return 0;
}