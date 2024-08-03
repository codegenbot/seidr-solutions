#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> vec) {
    std::unordered_set<int> seen;
    vec.erase(std::remove_if(vec.begin(), vec.end(), [&seen](int num) {
        return !seen.insert(num).second;
    }), vec.end());
    return vec;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sortedA = a;
    std::vector<int> sortedB = b;
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    input = remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}