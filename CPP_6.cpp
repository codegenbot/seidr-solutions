#include <vector>
#include <string>
#include <cassert> // To use assert

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({4}, {4}));
}