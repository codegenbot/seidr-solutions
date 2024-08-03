#include <cassert>
#include <vector>
#include <string>

bool issame(int n, const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return n == a.size() && a == b;
}

int odd_count(const std::vector<std::string>& vec) {
    int count = 0;
    for (const auto &str : vec) {
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(issame(5, {"abc", "def", "ghi", "123", "456"}, {"abc", "def", "ghi", "123", "456"}));
    assert(odd_count({"271", "137", "314"}) == 1);

    return 0;
}