#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> f(int n) {
    return {1, 2, 6};
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}