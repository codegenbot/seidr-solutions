```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

int main() {
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, {"run",""} ,std::vector<std::vector<std::string>>({{"grunt", "prune"}})));
}