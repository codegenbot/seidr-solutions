#include <stdio.h>
using namespace std;

bool is_equal_to_sum_even(int n) {
    // Check if n is at least 8 and even
    return n >= 8 && n % 2 == 0;
}