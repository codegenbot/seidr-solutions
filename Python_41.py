```
from math import comb

def car_race_collision(n: int):
    return comb(2*n-1, 2) - n