#include <set>

bool issame(std::set<std::string> a, std::set<std::string> b) {
    return a == b;
}

int main() {
    assert(issame({{"grunt", "trumpet", "prune", "gruesome"}, {"run"}}));
}