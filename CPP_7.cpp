#include <set>
#include <vector>
#include <algorithm>

bool issame(std::set<std::string> a, std::vector<std::string> b) {
    std::set<std::string> setb;
    for (const auto& s : b) {
        setb.insert(s);
    }
    return a == setb;
}

int main() {
    assert(issame({{"grunt", "trumpet", "prune", "gruesome"}}, {"run"}.second,{{"grunt", "prune"}}));
}