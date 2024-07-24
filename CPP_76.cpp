#include <bits/stdc++.h>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    assert(is_simple_power(1, 12) == true);
    // Add more test cases or code here
    return 0;
}