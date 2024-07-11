def car_race_collision(n: int, m: int):
    if n > m:
        return m * (m - 1)
    else:
        return n * m