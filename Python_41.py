def car_race_collision(n: int, m: int):
    return n * (n + m - 1) if m > n else m * (m - 1)