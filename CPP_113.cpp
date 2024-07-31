#include <vector>
#include <string>
#include <cassert>

int odd_count(const std::vector<std::string>& input) {
    int count = 0;
    for(const auto& str : input) {
        for(const auto& c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

bool is_same(const std::vector<std::string>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(is_same({std::to_string(odd_count({"271", "137", "314"}))}, {2, 3, 2}));
}