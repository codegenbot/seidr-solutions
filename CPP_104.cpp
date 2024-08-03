#include <unordered_set>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::unordered_set<int> digitsA(a.begin(), a.end());
    std::unordered_set<int> digitsB(b.begin(), b.end());

    return (digitsA.size() == digitsB.size()) && (digitsA == digitsB);
}