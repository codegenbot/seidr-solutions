def car_race_collision(n: int):
    if n <= 1:
        return 0
    return (n - 1) * (n // 2)