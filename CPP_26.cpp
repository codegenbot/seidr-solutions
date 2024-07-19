#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert([](const std::vector<int>& a, const std::vector<int>& b) { return a == b; }(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));

    return 0;
}