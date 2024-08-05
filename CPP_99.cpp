#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

int closestInteger(double num) {
    return lround(num);
}

int main() {
    double num;
    cin >> num;
    cout << closestInteger(num);
    return 0;
}