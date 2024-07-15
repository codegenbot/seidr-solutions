#include <cmath>
bool iscuber(int a) {
    int cube_root = round(pow(abs(a), 1.0 / 3));
    return (a == cube_root * cube_root * cube_root);
}