def car_race_collision(n: int):
    total_distance = n * (n + 1) // 2
    return min(total_distance, 100)