#include <iostream>
#include <vector>

std::vector<int> leaders(const std::vector<int>& v) {
    // ... (your original implementation here)
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5, 6};
    std::cout << "Leaders: ";
    for (auto leader : leaders(input)) {
        std::cout << leader << " ";
    }
    return 0;
}