#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y, int z) {
    return x + y + z;
}

int main() {
    srand(time(NULL));
    int x = rand() % 1000;
    int y = rand() % 1000;
    int z = rand() % 1000;

    assert(add(x, y, z) == x + y + z);
    
    return 0;
}