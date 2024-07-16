#include <cassert>

int car_race_collision(int n) {
    return n * (n - 1) / 2;
}

// Example usage
int main() {
    assert(car_race_collision(10) == 100);
    return 0;
}