#include <iostream>
#include <cassert>

int car_race_collision(const std::vector<int>& cars) {
    int total_collisions = 0;
    for (int speed : cars) {
        total_collisions += speed * (speed + 1) / 2;
    }
    
    return total_collisions;
}