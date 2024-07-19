```cpp
#include <cmath>
float a, b, c;
std::cout << "Enter side lengths a, b, and c of the triangle: ";
std::cin >> a >> b >> c;
if(a+b>c && a+c>b && b+c>a)
    std::cout << "The area of the triangle is " << triangle_area(a,b,c);
else
    std::cout << "Error: Sides do not form a valid triangle.\nTry again with different side lengths!";
float triangle_area(float a, float b, float c) {
    float s = (a + b + c)/2;
    return sqrt((s-a)*(s-b)*(s-c));
}