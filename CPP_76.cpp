#include <iostream>
#include <cmath>
bool is_simple_power(int x){
    if (x == 1) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        int p = i;
        while (p <= x) {
            p *= i;
            if (p == x) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    assert (is_simple_power(1)==true);
    return 0;
}