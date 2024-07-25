#include <iostream>
#include <vector>
#include <numeric>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile(n);
    for (int i = 0; i < n; ++i) {
        pile[i] = (i + 1) * 2;
    }
    return pile;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
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