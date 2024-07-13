Here is the solution:

def fuel_cost():
    n = int(input())
    total_fuel = 0
    for i in range(n):
        num = int(input())
        fuel = (num // 3) - 2
        if fuel < 0:
            continue
        total_fuel += fuel
    return total_fuel