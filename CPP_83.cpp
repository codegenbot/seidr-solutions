```c++
#include <cassert>

int starts_one_ends(int n);

int main() {
    assert (starts_one_ends(5) == 18000);
    return 0;
}

int starts_one_ends(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}