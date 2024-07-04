#include <iostream>
using namespace std;

int car_race_collision(int n) {
    return (n * (n - 1)) / 2; // Calculate based on the formula for combination
}

int main() {
    int n;
    cin >> n; // Read input
    cout << car_race_collision(n) << endl; // Print output
    return 0;
}