def car_race_collision(n: int):
    return max(0, min(n // 2, n - 1) if n % 2 else n // 2)