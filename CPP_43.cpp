#include <vector>
#include <set>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    if (l.empty()) return false; // Check for empty vector
    
    std::set<int> s(l.rbegin(), l.rend()); 
    for (int num : s) {
        int complement = -num;
        if (s.find(complement) != s.end()) { // Find the complement in the set
            return true;
        }
    }
    return false;
}