```
#include <iostream>

int car_race_collision(int n) {
    int collisions = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            collisions++;
        }
    }
    return collisions;
}
```