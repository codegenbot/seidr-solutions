#include <iostream>
#include <cmath>

bool right_angle_triangle(int a, int b, int c) {
    if(pow(a,2) + pow(b,2) == pow(c,2) || pow(b,2) + pow(c,2) == pow(a,2) || pow(a,2) + pow(c,2) == pow(b,2)){
        return true;
    }
    return false;
}

int main() {
    assert(right_angle_triangle(3, 4, 5) == true);
    assert(right_angle_triangle(1, 1, 1) == false);
    assert(right_angle_triangle(2, 2, 10) == false);
    
    return 0;
}