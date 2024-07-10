int car_race_collision(int n) {
    int total_collisions = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                total_collisions++;
            }
        }
    }
    return total_collisions / 2;
}