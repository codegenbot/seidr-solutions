#include <cassert>

int modp(int a, int b) {
    return a % b;
}

int main() {
    assert(modp(31, 5) == 3);

    return 0;
}