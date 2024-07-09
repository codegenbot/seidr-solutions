#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 3}));
    return 0;
}