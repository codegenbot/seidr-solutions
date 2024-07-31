#include <vector>
#include <string>
#include <cassert>

int odd_count(const std::vector<std::string>& vec) {
    int odd_count = 0;
    for (const auto& str : vec) {
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
    }
    return odd_count;
}

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(is_same({std::to_string(odd_count({"271", "137", "314"}))}, {"2", "3", "2"}));
}