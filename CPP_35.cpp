#include <algorithm>
#include <vector>
#include <cmath>

int std::maxElement(std::vector<int> l) {
    int result = *std::max_element(l.begin(), l.end());
    return result;
}

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int result = maxElement(l);
    return 0;
}