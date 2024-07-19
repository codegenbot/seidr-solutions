```
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main(int argc, char *argv[]) {
    assert(issame({}, {7, 9, 7, 1}));
    return 0;
}