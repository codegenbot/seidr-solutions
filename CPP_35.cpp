#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int result = *std::max_element(l.begin(), l.end());
    std::cout << "The absolute value of the maximum element is: " << std::abs(result) << std::endl;
    return 0;
}