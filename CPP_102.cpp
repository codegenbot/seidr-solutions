#include <iostream>
#include <cassert>

int choose_num(int x, int y) {
    int max_even = -1;
    for (int i = y; i >= x; --i) {
        if (i % 2 == 0) {
            max_even = i;
            break;
        }
    }
    return max_even;
}

int main() {
    assert(choose_num(546, 546) == 546);

    return 0;
}