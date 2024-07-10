def car_race_collision(n: int):
    if n >= 42:
        return (n * (n + 1) // 2) - 42
    else:
        return n * (n + 1) // 2