#include <utility>
#include <vector>
#include <cassert>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    if(a[0] == a[1] + b[1]) {
        return {a[1], 0};
    } else {
        return {a[1] + b[1], 0};
    }
}

int main() {
    assert(issame({4, 5}, {5, 1}) == std::vector<int>({5, 0}));
}