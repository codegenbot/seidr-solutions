def car_race_collision(n: int):
    if n % 2 == 0:
        return n * (n - 2) // 2
    else:
        return (n - 1) * (n - 3) // 2