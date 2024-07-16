#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int n;
    std::cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    int idx = 0; // Assume idx is calculated based on the problem statement

    for (int i = 0; i <= idx; ++i) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx + 1; i < n; ++i) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}