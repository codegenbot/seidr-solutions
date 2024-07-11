```
import math

def car_race_collision(n: int):
    return sum(math.comb(i + 1, 2) for i in range(n))