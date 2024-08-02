import math
def car_race_collision(n: int):
    if n < 2:
        return 0
    return math.factorial(2 * n) - math.factorial(n + 1)