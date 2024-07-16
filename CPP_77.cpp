#include <cmath>

bool iscuber(int a) {
    int root = round(cbrt(abs(a)));
    return (a == root * root * root);
}

int main() {
    assert(iscuber(1729) == false);
    // Add more test cases if needed
    return 0;
}