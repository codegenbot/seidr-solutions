```cpp
#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, {"run", "grunt", "prune"}));
}