int car_race_collision(int n, int speed[]) {
    int collisions = 0;
    for (int i = 1; i < n; ++i) {
        if (speed[i] > speed[i - 1]) {
            collisions++;
        }
    }
    return collisions;
}