#include <iostream>
#include <cmath>
using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float result = triangle_area(a, b, c);
    cout << result << endl;
    return 0;
}