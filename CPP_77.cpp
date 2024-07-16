#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int root = round(cbrt(abs(a)));
    return (a == root * root * root);
}

int main() {
    assert (iscuber(1729) == false);
    
    return 0;
}