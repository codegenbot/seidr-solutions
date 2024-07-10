def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        return min(a1, a2) * (n - 1)