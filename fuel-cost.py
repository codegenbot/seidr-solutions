import math
def fuel_cost():
    total_fuel = 0
    n = int(input())
    for _ in range(n):
        num = int(input())
        total_fuel += math.floor(num / 3) - 2
    return total_fuel