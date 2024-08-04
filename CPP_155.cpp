#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> result = even_odd_count(0);
    std::cout << result[0] << " " << result[1] << std::endl;
    return 0;
}