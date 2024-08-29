def fuel_cost():
    n = int(input())
    total_fuel = 0
    for _ in range(n):
        num = int(input())
        total_fuel += (num // 3) - 2
    return total_fuel