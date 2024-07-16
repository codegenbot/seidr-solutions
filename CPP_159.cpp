#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame({5, 0}, {5, 0}));
    return 0;
}