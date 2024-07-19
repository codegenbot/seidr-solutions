```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    unordered_map<int, bool> seen;
    std::vector<int> result;

    for (int num : numbers) {
        if (std::find(seen.begin(), seen.end(), num) == seen.end()) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>{1, 2, 3, 4, 5});
    return 0;
}