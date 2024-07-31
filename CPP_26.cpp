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

bool areVectorsSame(std::vector<int> a, std::vector<int> b) {
    return areVectorsEqual(a, b);
}

int main() {
    assert(areVectorsSame({1, 2}, {1, 2}) && areVectorsSame({1, 2}, {2, 1}));
    assert(areVectorsSame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}