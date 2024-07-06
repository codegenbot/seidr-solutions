def car_race_collision(n: int):
    return len([i for i in range(n) if n - i > 1])