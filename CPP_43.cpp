#include <iostream>
#include <vector>
#include <cassert>

bool pairs_sum_to_zero(std::vector<int> l);

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
}