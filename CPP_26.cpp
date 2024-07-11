#include <vector>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return remove_duplicates(a) == remove_duplicates(b);
}

std::vector<int> remove_duplicates(const std::vector<int>& v) {
    std::vector<int> result;
    std::unordered_set<int> unique;
    
    for (int num : v) {
        if (unique.insert(num).second) {
            result.push_back(num);
        }
    }
    
    return result;
}