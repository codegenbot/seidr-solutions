def car_race_collision(n: int, m: int):
    if n < m:
        return n * m
    elif m > n:
        return (m - 1) * m
    else:
        return n * m