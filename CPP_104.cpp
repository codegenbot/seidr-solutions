#include <vector>
#include <algorithm>
#include <cassert>

bool unique_digits(const std::vector<int>& input) {
    std::vector<int> sorted_input = input;
    std::sort(sorted_input.begin(), sorted_input.end());
    return sorted_input == input;
}

int main() {
    assert(unique_digits({135, 103, 31, 31, 135}));
    return 0;
}