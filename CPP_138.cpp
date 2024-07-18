#include <cassert>

bool is_equal_to_sum_even(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

int main() {
    assert(is_equal_to_sum_even(16) == true);

    return 0;
}