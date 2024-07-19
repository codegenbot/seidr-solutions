#include <cassert>

int getSetSize(int s, int k, int n) {
    if (s <= k)
        return 1;
    else
        return (n + k - 1) / k;
}

int main() {
    assert(getSetSize(127, 97, 8192) == 3);
    return 0;