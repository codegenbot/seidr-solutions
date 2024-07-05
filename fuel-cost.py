```
import math


def fuel_cost(vector):
    return sum(math.floor((i / 3) - 2) for i in vector)


print(fuel_cost([2020]))