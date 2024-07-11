def car_race_collision(n: int):
    return sum((i * (n - i)) // 2 for i in range(1, n + 1))