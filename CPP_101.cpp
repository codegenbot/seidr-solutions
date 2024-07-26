#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert (issame(std::vector<std::string>{"ahmed", "gamal"}, std::vector<std::string>{"ahmed", "gamal"}));
    return 0;
}