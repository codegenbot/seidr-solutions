#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int car_race_collision(string track) {
    int collisions = 0;
    int right_cars = 0;

    for (char direction : track) {
        if (direction == 'R') {
            right_cars++;
        } else if (direction == 'L') {
            collisions += right_cars;
        }
    }

    return collisions;
}

int main() {
    string track;
    cin >> track;

    int result = car_race_collision(track);
    cout << result << endl;

    // Test assertions (use valid string inputs)
    assert(car_race_collision("RLR") == 1);
    assert(car_race_collision("RRLL") == 4);
    assert(car_race_collision("RL") == 1);

    return 0;
}