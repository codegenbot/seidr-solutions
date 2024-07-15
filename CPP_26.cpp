#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::vector<int> temp = vec;
    std::sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    return temp;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    input = remove_duplicates(input);
    assert(is_same(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}