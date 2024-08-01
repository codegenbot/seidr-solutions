#include <vector>
#include <algorithm>
#include <unordered_set>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_set<int> seen;
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [&seen](int x) {
        return !seen.insert(x).second;
    }), numbers.end());
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}