#include <vector>
#include <string>
#include <cassert>

std::vector<int> odd_count(std::vector<std::string> strings) {
    std::vector<int> counts;
    for (const std::string& str : strings) {
        int odd_count = 0;
        for (char ch : str) {
            if (ch >= '0' && ch <= '9' && (ch - '0') % 2 != 0) {
                odd_count++;
            }
        }
        counts.push_back(odd_count);
    }
    return counts;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(odd_count({"271", "137", "314"}), {2, 3, 2}));
}