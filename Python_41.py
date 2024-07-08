def car_race_collision(n: int):
    return int(1 - (1 - 1 / n) ** (n * (n - 1) // 2) * 100)