#include <cmath>

int iscuber(int a) {
    int root = round(cbrt(a));
    return root * root * root == a;
}