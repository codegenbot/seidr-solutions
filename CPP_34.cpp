#include <algorithm>
#include <vector>
#include <assert.h>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> removeDuplicates(const std::vector<int>& l) {
    std::vector<int> result = l;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(removeDuplicates({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}