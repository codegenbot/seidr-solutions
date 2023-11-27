#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int cube = cbrt(a); // compute the cube root of a
    
    if (cube * cube * cube == a) { // check if cube^3 is equal to a
        return true;
    }
    
    return false;
}