#include <vector>
#include <cassert>
#include <cmath>
#include <algorithm>

int main(){
    std::vector<float> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    auto max = *std::max_element(l.begin(), l.end());
    assert(std::abs(max - 124) < 1e-4);
    return 0;
}