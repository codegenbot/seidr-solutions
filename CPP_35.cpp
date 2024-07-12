#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> vector_name = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return std::abs(*std::max_element(vector_name.begin(), vector_name.end()));
}