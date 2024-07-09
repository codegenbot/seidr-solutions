#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collisions = (n * (n - 1)) / 2;
    return collisions;
}

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;
    cout << "Number of collisions: " << car_race_collision(n) << endl;
    return 0;
}