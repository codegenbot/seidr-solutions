#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> result;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    assert(issame({"mamma", "hello"}, {"mia", "world"}) == std::vector<std::string>{"hello"});
    return 0;
}