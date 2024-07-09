#include <vector>
#include <set>

bool pairs_sum_to_zero(std::vector<std::vector<int>> l) {
    std::set<int> s;
    for (const auto& v : l) {
        for (int i : v) {
            s.insert(i);
        }
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
    std::vector<std::vector<int>> input = {{-3}, {9}, {-1}, {4}, {2}, {31}};
    assert(pairs_sum_to_zero(input) == false);
    return 0;
}