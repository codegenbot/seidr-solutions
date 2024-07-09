```cpp
#include <set>
bool issame(std::set<std::string> a, std::set<std::string> b) {
    return a == b;
}
int main() {
    assert(issame(std::set<std::string>{"grunt", "trumpet", "prune", "gruesome"}, std::set<std::string>{"run"}));
}