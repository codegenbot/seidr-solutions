#include <iostream>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    int min_sides = std::min(n, m);
    double probability = static_cast<double>(min_sides - 1) / (2 * min_sides);

    std::cout << probability << std::endl;

    return 0;
}