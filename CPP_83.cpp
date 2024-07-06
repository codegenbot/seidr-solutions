```cpp
#include <cassert>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 1 || (i >= 10 && i % 100 == 1))) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(starts_one_ends(5) == 18000);
}