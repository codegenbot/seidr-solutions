#include <cmath>

bool iscube(int a) {
    int cube_root = round(cbrt(a));
    return (a == cube_root * cube_root * cube_root);
}