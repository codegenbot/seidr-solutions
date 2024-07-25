#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> result(n);
    std::iota(result.begin(), result.end(), n);
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> input = make_a_pile(n);
    
    std::vector<int> expected_output(n);
    std::iota(expected_output.begin(), expected_output.end(), n);
    
    assert(issame(input, expected_output));
    
    return 0;
}