#include <vector>
#include <algorithm>
#include <unordered_set>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_set<int> seen;
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [&seen](int num) {
        return !seen.insert(num).second;
    }), numbers.end());
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}