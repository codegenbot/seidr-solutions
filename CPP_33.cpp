#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result = l;
    for (int i = 0; i < result.size(); i += 3) {
        std::sort(result.begin() + i, result.begin() + i + 3);
    }
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}