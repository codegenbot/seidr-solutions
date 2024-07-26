#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        n += (n % 2 == 0) ? 2 : 1;
        stones.push_back(n);
    }
    return stones;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}