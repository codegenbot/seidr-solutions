int car_race_collision(int n) {
    if (n < 2) {
        return 0;
    }
    return n * (n - 1) / 2; // Calculate half of the total number of collisions
}