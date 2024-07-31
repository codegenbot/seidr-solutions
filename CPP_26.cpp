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

bool are_vectors_the_same(std::vector<int> a, std::vector<int> b) {
    return sameVectors<std::vector<int>::value_type>(a, b);
}

int test_main() {
    if (!are_vectors_the_same({1, 2, 3, 2, 4, 3, 5}, {1, 2, 3, 4, 5})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    assert(are_vectors_the_same(std::vector<int>({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 2, 3, 4, 5})));
    return 0;
}