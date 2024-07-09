#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collision = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            cout << "Error: Invalid input. Please enter a positive integer.\n";
            return -1;
        }
    }
    return collision;

}

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;
    if(n < 0) {
        cout << "Error: Invalid input. Please enter a non-negative integer.\n";
        return -1;
    }
    cout << "Number of collisions: " << car_race_collision(n) << endl;
    return 0;
}