#include <cmath>

bool iscuber(int a) {
    int c = (int)cbrt((double)a);
    return pow(c, 3) == a;
}