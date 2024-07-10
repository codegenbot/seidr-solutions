int car_race_collision(int n) {
    if (n <= 1) {
        return 0;
    }
    return n * (n - 1); // Calculate the total number of collisions
}