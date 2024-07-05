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

    assert(car_race_collision("RLRLRRLLR") == 7);  // Run the test function

    return 0;
}