int car_race_collision(int n) {
    int collisions = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j == n + 1) {
                collisions++;
            }
        }
    }
    return collisions;
}