#include <iostream>
#include <vector>
#include <algorithm>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    // Implementation of get_odd_collatz remains the same
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> odd_collatz = get_odd_collatz(n);
    std::vector<int> comparison_vector = {1, 3, 5, 7}; // Example vector for comparison

    if (issame(odd_collatz, comparison_vector)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are different." << std::endl;
    }

    return 0;
}