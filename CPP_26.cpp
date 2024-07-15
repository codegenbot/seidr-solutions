#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> expected_result = {1, 4, 5};
    std::vector<int> result = remove_duplicates(input);
    
    if (issame(result, expected_result)) {
        std::cout << "Results match!" << std::endl;
    } else {
        std::cout << "Results do not match!" << std::endl;
    }
    
    return 0;
}