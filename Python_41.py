def car_race_collision(n: int, m: int):
    if n < m:
        return n * (n - 1)
    else:
        return n * m

print(car_race_collision(10, 5))