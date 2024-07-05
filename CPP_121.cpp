#include <iostream>
#include <vector>

int solutions(const std::vector<int>& lst) {
    int sum = 0;
    for (size_t i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::cout << (solutions({3, 13, 2, 9}) == 3) << std::endl; // Expected output: 1 (true)
    return 0;
}