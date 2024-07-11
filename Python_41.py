def car_race_collision(n: int, m: int):
    return n * (n - 1) // 2 if n < m else m * (m - 1)