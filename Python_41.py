def car_race_collision(n: int):
    return len([i + j for i in range(n) for j in range(i + 1, n)])