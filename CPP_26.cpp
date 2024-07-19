#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> seen;
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
    assert(std::vector<int>({1, 2, 3, 2, 4, 3, 5}) == remove_duplicates({1, 2, 3, 2, 4, 3, 5}));
    return 0;