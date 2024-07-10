def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if a1 > a2:
        return (n - 1) / 2 * a2
    else:
        return (n - 1) / 2 * a1