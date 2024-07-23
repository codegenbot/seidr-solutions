```
int car_race_collision(int n) {
    int total_collisions = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j <= n; j++) {
            if (i + j > n * 2 && i != j) {
                total_collisions++;
            }
        }
    }
    return total_collisions;
}