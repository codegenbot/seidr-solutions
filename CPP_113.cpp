#include <cassert>
#include <vector>
#include <string>

bool issame(int n, std::vector<std::string> vec) {
    return n == vec.size();
}

int odd_count(std::vector<std::string> vec) {
    int count = 0;
    for (const auto &str : vec) {
        for (char c : str) {
            if (std::isdigit(c) && (c - '0') % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(issame(3, {"abc", "def", "ghi"}));
    assert(odd_count({"271", "137", "314"}) == 1);

    return 0;
}