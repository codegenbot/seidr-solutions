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
    std::vector<int> expected = {1, 4, 5};
    std::vector<int> input = {1, 1, 2, 4, 4, 5};
    std::vector<int> output = remove_duplicates(input);
    assert(output == expected);
    
    return 0;
}