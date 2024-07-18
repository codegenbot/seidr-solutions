#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    std::vector<int> input = {5, 2, 8, 2, 6, 5, 8, 2, 3};
    std::vector<int> expected_output = {2, 3, 5, 6, 8};
    
    auto result = remove_duplicates(input);
    
    assert(issame(result, expected_output));
    
    return 0;
}