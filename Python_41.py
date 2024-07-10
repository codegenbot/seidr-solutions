```
def car_race_collision(n: int):
    return sum([i for _ in range(n) for i in [0, n]][:-1])