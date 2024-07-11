def car_race_collision(n: int, m: int):
    if n < m:
        return n * (n - 1)
    else:
        return m * (m - 1)


assert car_race_collision(10, 5) == 50