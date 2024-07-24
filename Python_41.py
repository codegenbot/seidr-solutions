def car_race_collision(n: int):
    return sum(i for i in range(1, n + 1) if not (i % 15 == 0))