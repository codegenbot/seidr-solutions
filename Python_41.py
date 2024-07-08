def car_race_collision(n: int):
    return round(1.0 - (1.0 - 1.0 / n) ** (n * (n - 1) // 2) * 100)