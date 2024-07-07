#include <algorithm>
#include <cmath>

int findMax(int n) {
    if (n <= 0) {
        std::cout << "Error: Please enter a positive integer." << std::endl;
        return -1;
    }
    else {
        int max = *std::max_element(std::vector<int>(1, n).begin(), std::vector<int>(1, n).end());
        return abs(max);
    }
}