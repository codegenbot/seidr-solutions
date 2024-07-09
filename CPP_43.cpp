```cpp
#include <vector>
#include <set>

bool pairs_sum_to_zero(std::vector<std::vector<int>> l) {
    std::set<int> s;
    for (const auto& v : l) {
        if(v.size() != 2)
            return false;
        int i = v[0];
        int j = v[1];
        s.insert(i);
        s.insert(j);
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
    std::vector<std::vector<int>> input = {{-3, 0}, {9, -9}, {-1, 1}, {4, -4}, {2, -2}, {31, -31}};
    assert(pairs_sum_to_zero(input) == true);
    return 0;
}