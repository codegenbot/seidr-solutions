```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>

bool areVectorsEqual(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

bool sameVectors(std::vector<int> a, std::vector<int> b) {  
    return areVectorsEqual(a, b);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    if (!sameVectors(numbers, {1, 2, 3, 4, 5})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    numbers = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    if (!sameVectors(numbers, {1, 2, 3, 4, 5})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    assert(sameVectors(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
}