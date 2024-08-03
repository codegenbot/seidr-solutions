#include <vector>
#include <string>
#include <cassert>

bool issame(int n, std::vector<std::string> a, std::vector<std::string> b) {
    return n == a.size() && n == b.size();
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
    assert(issame(3, {"abc", "def", "ghi"}, {"jkl", "mno", "pqr"}));
    assert(odd_count({"271", "137", "314"}) == 1);
    
    return 0;
}