def car_race_collision(n: int):
    return sum(1 for i in range(n) if (i + 1) % 2 == 0)