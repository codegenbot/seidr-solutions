#include <vector>
#include <set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::set<int> s(l);
    for (int i : s) { 
        int complement = -i;
        if (s.find(complement) != s.end()) {
            return true;
        }
    }
    return false;
}