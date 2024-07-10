#include <cmath>

using namespace std;

bool any_int(float a, float b, float c) {
    int ai = lround(a);
    int bi = lround(b);
    int ci = lround(c);

    return (ai == bi + ci || ai == bi - ci || ai == ci + bi ||
            bi == ai + ci || bi == ai - ci || bi == ci + ai ||
            ci == ai + bi || ci == ai - bi || ci == bi + ai);
}