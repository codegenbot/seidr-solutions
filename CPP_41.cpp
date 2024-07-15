#include <iostream>
#include <cassert>

int car_race_collision(int n) {
    return n * (n + 1) / 2 - 1;
}

int main() {
    assert(car_race_collision(10) == 45);
    return 0;
}