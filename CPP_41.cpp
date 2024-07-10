long long car_race_collision(int n) {
    if (n < 2) {
        return 0;
    }
    return static_cast<long long>(n) * (n - 1) / 2;
}