#include <iostream>
#include <cassert>

int car_race_collision(int n) {
    if(n <= 1) {
        return 0;
    } else {
        return n * (n - 1) / 2;
    }
}

int main() {
    assert(car_race_collision(10) == 100);
    assert(car_race_collision(1) == 0);
    assert(car_race_collision(5) == 10);

    return 0;
}