#include <algorithm>
#include <cmath>
#include <assert.h>

int main() {
    int result = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    assert(std::abs(result-124)<1e-4);
    return 0;
}