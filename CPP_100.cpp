#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result(n);
    std::iota(result.begin(), result.end(), 1);
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> input = make_a_pile(n);
    
    assert(issame(input, std::vector<int>(n, 1)));
    
    return 0;
}