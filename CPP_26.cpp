```cpp
#include <iostream>
#include <vector>
#include <unordered_map>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    unordered_map<int, int> seen;
    std::vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen[num] = 1; // just store any value
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>({1, 2, 3, 4, 5}));
    return 0;
}