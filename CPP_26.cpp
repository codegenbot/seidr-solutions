#include <initializer_list>
#include <vector>
#include <algorithm>

bool compareVectors(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool isSame(std::vector<int> v1, std::vector<int> v2) {
    return compareVectors(v1, v2);
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

int main() {
    if (!isSame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}