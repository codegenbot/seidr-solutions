#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 3, -23, 243, -400, 0}, {}));
    return 0;
}