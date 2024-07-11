def car_race_collision(n: int, m: int):
    if n < m:
        return (n - 1) * m
    else:
        return (m - 1) * (2 * m - 1) // 2