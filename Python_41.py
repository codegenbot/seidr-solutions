```
def car_race_collision(n: int):
    return functools.reduce(lambda x, y: x * y, range(1, n + 1))