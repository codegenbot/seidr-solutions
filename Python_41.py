def car_race_collision(n: int):
    if n % 2 == 0:
        return n * (n - 1) // 2 + n // 2
    else:
        return n * (n - 1) // 2