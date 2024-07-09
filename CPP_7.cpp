```cpp
#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> a = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> b = {"grunt", "prune"};
    assert(a==b);
}