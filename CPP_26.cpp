```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>

bool compareVectors(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

bool areSame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    if (!areEqual({1, 2, 3, 2, 4, 3, 5}, {1, 2, 3, 4, 5})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    assert(std::equal(remove_duplicates({1, 2, 3, 2, 4, 3, 5}).begin(), remove_duplicates({1, 2, 3, 2, 4, 3, 5}).end(), {1, 4, 5}.begin()));
    return 0;
}