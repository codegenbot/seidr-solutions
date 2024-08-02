#include <iostream>
#include <cmath>

using namespace std;

bool right_angle_triangle(int a, int b, int c) {
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return true;
    else
        return false;
}
  
int main() {
    // Your main function logic here
    return 0;
}  