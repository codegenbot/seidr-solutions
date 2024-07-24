def car_race_collision(n: int):
    return sum(i for i in range(1, n + 1) if i % 3 != 0 and i % 5 != 0 and i % 15 != 0)