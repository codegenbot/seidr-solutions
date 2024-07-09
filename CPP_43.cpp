```
#include <cassert>
#include <vector>
#include <set>

bool pairs_sum_to_zero(std::vector<std::pair<int, int>> l) {
    std::set<int> s;
    for (const auto& p : l) {
        if(p.second != -p.first)
            return false; 
        s.insert(p.first);
    }
    for (auto it = s.begin(); it != s.end(); ++it) { 
        int complement = -(*it);
        if (s.find(complement) != s.end()) {
            return true;
        }
    }
    return false; 
}

int main() {
    std::vector<std::pair<int, int>> input = {{-3, 0}, {9, -9}, {-1, 1}, {4, -4}, {2, -2}, {(int)31, -(int)31}};
    assert(pairs_sum_to_zero(input) == true);
    return 0;
}