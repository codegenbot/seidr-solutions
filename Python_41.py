```
from functools import reduce

def car_race_collision():
    n = int(input())
    return reduce(lambda x, y: x * y, range(1, n + 1))