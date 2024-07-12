#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = (i % 2 == 0) ? std::accumulate(1, i + 1, 1, std::multiplies<int>()) : std::accumulate(1, i + 1, 0);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}