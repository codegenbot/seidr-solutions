#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = rand() % 1000;
    int y = rand() % 1000;

    assert(add(x, y) == x + y);

    return 0;
}