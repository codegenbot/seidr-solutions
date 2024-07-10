def car_race_collision(n: int, a1: int, a2: int):
    if a1 > a2:
        return (n - 1) * a2
    else:
        return (n - 1) * a1