#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// Function to calculate collisions
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

// Main function to read input and output result
int main() {
    string track;
    cin >> track;

    // Run an example assertion to validate the function
    assert (car_race_collision("RRLL") == 4);

    int result = car_race_collision(track);
    cout << result << endl;

    return 0;
}