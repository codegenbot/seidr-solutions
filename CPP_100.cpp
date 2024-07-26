#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    while (n % 2 == 0) {
        stones.push_back(n);
        n += 2;
    }
    return stones;
}