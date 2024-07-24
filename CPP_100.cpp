#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::vector<std::vector<int>> pile1 = make_a_pile(n);
    for (const auto& row : pile1) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}