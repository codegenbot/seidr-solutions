#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& a, int n){
    std::vector<int> result;
    if (n >= a.size()) {
        return result;
    }
    std::vector<int> sorted_a = a;
    std::sort(sorted_a.begin(), sorted_a.end());
    for (int i = 0; i < n; ++i) {
        result.push_back(sorted_a[sorted_a.size() - 1 - i]);
    }
    return result;
}

int main(){
    assert(issame({1, 2, 3, -23, 243, -400, 0}, {0}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}