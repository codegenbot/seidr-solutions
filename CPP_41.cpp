#include <iostream>
#include <cassert>

int car_race_collision(int n) {
    return n * (n - 1) / 2;
}

int main() {
    assert(car_race_collision(10) == 100);
  
    assert(car_race_collision(5) == 10);
    assert(car_race_collision(6) == 15);
    
    return 0;
}