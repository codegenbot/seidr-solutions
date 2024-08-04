#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<int> get_even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

void main() {
    std::vector<int> result = get_even_odd_count(0);
    std::cout << result[0] << " " << result[1] << std::endl;
}