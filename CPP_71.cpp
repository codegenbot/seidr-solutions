#include <cmath>
#include <cassert>
#include <cstddef>

int triangle_area(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) 
        return -1;  
    int s = (a + b + c) / 2.0;
    double area = std::sqrt(s*(s-a)*(s-b)*(s-c));
    return static_cast<int>(area);
}