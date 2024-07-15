#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    input = remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}