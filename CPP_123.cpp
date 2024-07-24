```cpp
#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result = {n};
    while (n != 1) {
        if (n % 2 != 0) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        result.push_back(n);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}