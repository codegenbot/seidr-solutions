def car_race_collision(n: int):
    return 0 if n <= 1 else (n - 2) * ((n - 1) * n // 2)