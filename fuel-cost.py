import math
def fuel_cost(numbers):
    return sum([int(math.floor((n / 3))) - 2 for n in numbers])