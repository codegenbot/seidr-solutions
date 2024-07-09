#include <cassert>
#include <vector>
#include <set>

bool pairs_sum_to_zero(std::set<std::pair<int, int>> l) {
    std::set<int> s;
    for (const auto& v : l) {
        if(v.size() != 2)
            throw std::runtime_error("Each pair must have exactly two elements.");
        int i = v.first;
        int j = v.second;
        s.insert(i);
        s.insert(j);
    }
    for (auto it = s.begin(); it != s.end(); ++it) { 
        int complement = -(*it);
        if (s.find(complement) != s.end()) {
            return true;
        }
    }
    throw std::runtime_error("No pairs sum to zero.");
}

int main() {
    std::set<std::pair<int, int>> input = {{-3, 0}, {9, -9}, {-1, 1}, {4, -4}, {2, -2}, {31, -31}};
    return (pairs_sum_to_zero(input) ? 0 : 1);
}