#include<stdio.h>
#include<cmath>
using namespace std;

bool any_int(float a, float b, float c) {
    if (a == floor(a) && b == floor(b) && c == floor(c)) {
        int x = static_cast<int>(a);
        int y = static_cast<int>(b);
        int z = static_cast<int>(c);
        return (x == y + z) || (y == x + z) || (z == x + y);
    }
    return false;
}