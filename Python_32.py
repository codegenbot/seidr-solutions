import math

def find_zero(x: int):
    return round((-x + math.sqrt(x * x - 3)) / 3, 2)