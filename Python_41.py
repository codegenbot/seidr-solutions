def car_race_collision(n: int, m: int):
    if n < m:
        return n * m
    else:
        return (n - 1) * m + m