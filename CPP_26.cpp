#include <vector>
#include <unordered_set>

std::vector<int> remove_duplicates(const std::vector<int>& nums) {
    std::unordered_set<int> seen;
    std::vector<int> result;

    for (int num : nums) {
        if (seen.insert(num).second) {
            result.push_back(num);
        }
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return remove_duplicates(a) == remove_duplicates(b);
}