#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && a == b;
}

std::vector<int> removeDuplicates(std::vector<int> numbers) {
    unordered_map<int, bool> seen;
    std::vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(std::vector<int>(removeDuplicates({1, 2, 3, 2, 4, 3, 5}).begin(), removeDuplicates({1, 2, 3, 2, 4, 3, 5}).end()) == std::vector<int>({1, 2, 3, 4, 5});
    return 0;
}