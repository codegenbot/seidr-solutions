#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::vector<int> temp = vec;
    std::sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    return temp;
}

int main() {
    assert(is_same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), std::vector<int>{1, 4, 5}));
    
    return 0;
}