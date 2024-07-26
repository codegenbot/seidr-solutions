#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    while (n % 2 == 0) {
        stones.push_back(n);
        n += 2;
    }
    return stones;
}

int main() {
    assert(issame(make_a_pile(8), vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}