// Calculate the total number of collisions between cars in a race involving n cars
int car_race_collision(int n) {
    return n * (n - 1) / 2;
}