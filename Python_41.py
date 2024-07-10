def car_race_collision(n: int):
    if n <= 0:
        raise ValueError("Input must be greater than 0")
    return n * (n - 1) // 2