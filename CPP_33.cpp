#include <vector>
#include <algorithm>
#include <cassert>

void sort_third(std::vector<int>& vec) {
    if (vec.size() >= 3) {
        std::sort(vec.begin() + 2, vec.end());
    }
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> input = {5, 6, 3, 4, 8, 9, 2, 1};
    sort_third(input);
    assert(issame(input, std::vector<int>{2, 6, 3, 4, 8, 9, 5, 1});
    
    return 0;
}