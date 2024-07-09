#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collision = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            collision++;
        }
    }
    return collision;
}

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;
    int collisions = car_race_collision(n);
    cout << "Number of collisions: " << collisions << endl;
    return 0;
}