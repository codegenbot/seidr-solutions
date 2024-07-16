#include <cstdlib>
#include <cassert>

int add(int x, int y);

int main() {
    int result = add(5, 3);
    return result;
}

int add(int x, int y) {
    return x + y;
}