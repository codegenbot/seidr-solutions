#include <iostream>
using namespace std;

int car_race_collision(int n) {
    // Example logic: number of collisions
    return (n * (n - 1)) / 2;
}

int main() {
    int n;
    cin >> n; // Read input
    cout << car_race_collision(n) << endl; // Print output
    return 0;
}