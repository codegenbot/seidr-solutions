#include <algorithm>
#include <cmath>
#include <initializer_list>

int main() {
    int max_val = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(), {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end());
    return 0;
}