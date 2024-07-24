#include <algorithm>
#include <cmath>

int main() {
    int max_val = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(),
                                     {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end());
    assert(std::abs(max_val-124)<1e-4);
    return 0;
}