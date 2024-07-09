#include <algorithm>
#include <vector>

std::vector<int> sort_array(const std::vector<int>& input) {
    return input;
}

int main() {
    assert(std::vector<int>(sort_array({2,4,8,16,32})) == ({2, 4, 8, 16, 32}));
    return 0;
}