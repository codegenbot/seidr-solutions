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
    
    std::vector<int> expected_output(n);
    std::iota(expected_output.begin(), expected_output.end(), 1);
    
    assert(issame(input, expected_output));
    
    return 0;
}