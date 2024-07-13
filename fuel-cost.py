import math


def fuel_cost(vector):
    return sum(
        math.floor(i / 3) - 2 if i % 3 == 0 else math.floor(i / 3) for i in vector
    )