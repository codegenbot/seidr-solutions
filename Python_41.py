def car_race_collision(n):
    total_distance = sum(i * (n - i) for i in range(1, n + 1))
    return total_distance