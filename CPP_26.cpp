#include <initializer_list>
#include <vector>
#include <algorithm>

bool sameVectors(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

bool areVectorsEqual(std::vector<int> a, std::vector<int> b) {
    return sameVectors(a, b);
}

int main() {
    if (!areVectorsEqual({1, 2, 3, 2, 4, 3, 5}, {1, 2, 3, 4, 5})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    assert(areVectorsEqual(std::vector<int>({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 2, 3, 4, 5})));
    return 0;
}