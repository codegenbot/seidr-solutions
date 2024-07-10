def car_race_collision(n: int, a1: int = 0, a2: int = 0):
    return sum(1 for _ in range(min(a1-1, a2), max(a1, a2)+1))