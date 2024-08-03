#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> numbers) {
    std::vector<int> result;
    int largest = *std::max_element(numbers.begin(), numbers.end());
    int smallest = *std::min_element(numbers.begin(), numbers.end());
    result.push_back(smallest);
    result.push_back(largest);
    return result;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    return 0;
}