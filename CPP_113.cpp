#include <vector>
#include <string>
#include <cassert>

int odd_count(const std::vector<std::string>& vec) {
    int count = 0;
    for (const std::string& str : vec) {
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame({"271", "137", "314"}, {"271", "137", "314"}));
    odd_count({"271", "137", "314"});
    return 0;
}