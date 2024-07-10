#include <algorithm>
#include <cmath>

int main() {
    assert (abs(*std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return *std::max_element(l.begin(), l.end());
}