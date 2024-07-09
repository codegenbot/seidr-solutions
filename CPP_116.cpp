#include <algorithm>
#include <vector>

std::vector<int> sort_array(const std::vector<int>& input) {
    std::sort(input.begin(), input.end());
    return input;
}

int main() {
    assert(std::vector<int>(sort_array({2,4,8,16,32})) == ({1, 2, 4, 8, 16}));
    return 0;
}