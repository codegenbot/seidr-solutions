#include <iostream>
using namespace std;

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    float a, h;
    cin >> a >> h;
    cout << triangle_area(a, h) << endl;
    return 0;
}