#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int cubeRoot = round(cbrt(a));
    return cubeRoot * cubeRoot * cubeRoot == a;
}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}