#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) return false;
    for (const auto& p : a) {
        if (b.find(p.first) == b.end() || b.at(p.first) != p.second) return false;
    }
    return true;

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}