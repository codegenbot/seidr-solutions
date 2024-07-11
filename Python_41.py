def car_race_collision(n: int, m: int):
    if n < m:
        return n * m
    else:
        return (n - m + 1) * m

print(car_race_collision(10, 5))