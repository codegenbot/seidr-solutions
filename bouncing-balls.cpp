#include <iostream>
using namespace std;

int main() {
    double height0, height1;
    int n;
    cin >> height0 >> height1 >> n;

    double bounciness = height1 / height0;

    double totalDistance = 2.0 * (height0 + height1) * (1 - pow(bounciness, n));

    cout << fixed << setprecision(5) << totalDistance;
    
    return 0;
}