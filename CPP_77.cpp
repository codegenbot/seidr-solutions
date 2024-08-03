#include <cmath>
#include <cassert>

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}