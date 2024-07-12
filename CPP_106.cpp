#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> f(int n) {
    return std::vector<int>{1, 2, n};
}

int main() {
    assert(issame(f(3) , std::vector<int>{1, 2, 6}));
    return 0;
}