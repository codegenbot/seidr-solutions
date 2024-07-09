```cpp
#include <iostream>
using namespace std;

int car_race_collision(string s) {
    int n = stoi(s);
    int collision = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            collision++;
        }
    }
    return collision;

}

int main() {
    string s;
    cout << "Enter the number of cars: ";
    getline(cin, s);
    int num_cars = car_race_collision(s);
    cout << "Number of collisions: " << num_cars << endl;
    return 0;