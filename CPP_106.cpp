#include <vector>
#include <cassert>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result(n);
    for(int i = 1; i <= n; ++i){
        result[i-1] = (i % 2 == 0) ? std::accumulate(1, i+1, 1, std::multiplies<int>()) : i * (i + 1) / 2;
    }
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}