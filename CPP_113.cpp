#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

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
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<std::string> vec1 = { "271", "137", "314" };
    std::vector<std::string> vec2 = { "271", "137", "314" };
    assert(issame(vec1, vec2));
    
    assert(odd_count({ "271", "137", "314" }) == 4);
    
    return 0;
}