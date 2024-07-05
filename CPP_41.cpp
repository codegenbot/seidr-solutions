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

void test() {
    assert(car_race_collision("RLRLRRLLR") == 7);
    assert(car_race_collision("RRLL") == 4);
    assert(car_race_collision("RLRLRL") == 6);
    assert(car_race_collision("LLRR") == 0);
}

int main() {
    test();

    string track;
    cin >> track;

    int result = car_race_collision(track);
    cout << result << endl;

    return 0;
}