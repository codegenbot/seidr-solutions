#include <vector>
#include <iostream>

int basement(const std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    std::vector<int> test1({-2, -3, 4});
    std::cout << "Basement for " << test1 << ": " << basement(test1) << std::endl;

    std::vector<int> test2({10, 5, 5, -7, 1});
    std::cout << "Basement for " << test2 << ": " << basement(test2) << std::endl;

    return 0;
}