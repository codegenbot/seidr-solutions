
#include <cassert>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size();
}

int odd_count(std::vector<std::string> vec) {
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
    assert(issame({"abc", "def", "ghi"}, {"xyz", "uvw", "klm"}));
    assert(odd_count({"271", "137", "314"}) == 1);

    return 0;
}