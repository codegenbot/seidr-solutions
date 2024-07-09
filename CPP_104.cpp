#include <algorithm>
#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> a) {
    std::vector<int> result = a;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 103, 135}));
    return 0;
}