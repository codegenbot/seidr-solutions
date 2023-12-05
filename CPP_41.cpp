```
#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collisions = 0;

    for (int i = 1; i <= n; i++) {
        if ((i % 2 == 0 && i != n) || (i % 2 != 0 && i != 1)) {
            collisions++;
        }
    }

    return collisions;
}
```
This solution uses a simple for loop to iterate over the cars and check if they will collide. If a car is moving left to right, it will collide with every car that is moving right to left, except for itself and the last car. Therefore, we only need to increment the collisions counter when the car is moving left to right and it's not the last car or the first car (i % 2 == 0 && i != n).