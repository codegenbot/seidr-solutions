```cpp
#include <initializer_list>
#include <set>

bool pairs_sum_to_zero(const std::vector<std::pair<int, int>>& l) {
    std::set<int> s;
    for (const auto& p : l) {
        if(p.second != -p.first)
            return false; 
        s.insert(p.first);
    }
    for (auto it = s.begin(); it != s.end(); ++it) { 
        int complement = -(*it);
        if (s.find(complement) == s.end()) {
            return false;
        }
    }
    return true; 
}

int main() {
    std::vector<std::pair<int, int>> input({{-3, 9}, {-1, 4}, {-2, 2}, {31, -31}});
    assert(pairs_sum_to_zero(input) == false);
    return 0;
}