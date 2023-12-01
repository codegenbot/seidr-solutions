#include <cmath>

bool iscuber(int a) {
    int root = cbrt(a);
    return (root * root * root == a);
}