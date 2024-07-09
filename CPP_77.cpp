#include <cmath>

bool iscuber(int a) {
    int cube_root = round(pow(a, 1.0 / 3));
    return (cube_root * cube_root * cube_root == a);
}